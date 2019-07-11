sharpie cyan("cyan", 3.7);

while (cyan.getInkAmount() > 0) {
std::cout << "How many metres of " << cyan.getWidth() << " mm wide line would you like to draw with your "
<< cyan.getColor() << " sharpie?:";

float lineLength;
std::cin >> lineLength;
float inkAmountBeforeUse = cyan.getInkAmount();
cyan.use(lineLength);


if (lineLength >= inkAmountBeforeUse) {
std::cout << "The sharpie has become empty after " << inkAmountBeforeUse << " meters." << std::endl;
} else {
std::cout << "The sharpie has ink left for " << cyan.getInkAmount() << " meters." << std::endl;
}
}