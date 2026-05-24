# Final Reflection

## Scope Statement

### Features Status
- Done: Add Traveler
- Done: Calculate Total Cost
- Done: Travel Preference
- Done: Service Provider structure
- Done: Save Trip to File
- Stubbed: Load Trip from File
- Missing: Weather Notification
- Missing: Booking Cancellation Refund
- Cut: Cruise Booking
- Cut: Real-time pricing

### Features Built This Round
- Save Trip to File

## Prompt 1: Plan vs Reality
My original plan was to build a full travel platform with flights, hotels, car rentals, tour guides, weather notifications, and booking cancellations. What I actually built covers the core booking part — travelers can enter their info, add flights, hotels, and car rentals, see the total cost, and save their trip to a file.

The save to file feature was harder than I expected. I thought it would be simple but I had to learn about ofstream and how file writing works in C++. The TravelPackage class also ended up doing more than I planned — it manages flights, hotels, car rentals, and now file saving all in one place.

## Prompt 2: Design Decisions I Would Change
If I started over I would split TravelPackage into two classes. Right now it does too many things — it stores data AND displays it AND saves to file. I would make a separate FileSaver class to handle the file writing so TravelPackage only manages the trip data.

I would also not use a raw pointer for carRental. Using CarRental* caused issues because I had to remember to check for nullptr everywhere. I would use a boolean flag instead to track whether a car was added.

## Prompt 3: What I Learned

**Technical**: I learned how to use ofstream to write data to a file. Before this project I didn't know how file I/O worked in C++. Now I understand that ofstream opens a file and lets you write to it the same way cout prints to the screen.

**Design**: I learned that having one class do too many jobs makes the code harder to work with. My TravelPackage class handles storing data, displaying it, and saving it. This made it hard to change one thing without worrying about breaking another.

**Process**: I learned that small commits are really important. When I made one big commit with many changes it was hard to find which change broke the build. Smaller commits made it easier to track problems.

## Prompt 4: What's Left to Finish
1. Load from file — so travelers can reload a saved trip when they restart the program
2. Weather notification — show weather at destination before travel date
3. Booking cancellation and refund system — notify user if something gets cancelled
4. Input validation — handle invalid inputs so the program doesn't crash
5. Tour guide connection — connect traveler with local service providers
6. Better UI — make the menu clearer and easier to use

## Prompt 5: Workflow Reflection
The feature branch and pull request workflow has become more natural. Creating a branch, making commits, and pushing has become a habit. What still feels awkward is approving my own pull request — GitHub blocks self-approval so I had to merge directly.

If I was working with another developer the PR review would matter much more because someone else would catch my bugs. The branch naming and commit messages would also matter more so my teammate could understand what I was working on.

## Prompt 6: AI Use
I used Claude on this assignment to help me understand concepts and debug errors. It was most helpful when explaining why errors happened — for example when my header and cpp files had mismatched function signatures. It was less helpful when it generated long blocks of code at once because it was hard to understand everything at once. I learned to ask for one function at a time and ask Claude to explain each line. I made all the design decisions myself — which classes to build, what features to prioritize, and how to structure the project. Claude was like a tutor that helped me understand C++ syntax and debug problems.