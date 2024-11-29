#include <iostream>

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
printf("Podaj 3 liczby a ja zorwiaze uklad rownan ax + bx = cx \n");
    int a1, b1, c1;
    printf("Podaj liczbe a1: ");
    scanf("%d", &a1);
    printf("Podaj liczbe b1: ");
    scanf("%d", &b1);
    printf("Podaj liczbe c1: ");
    scanf("%d", &c1);
    printf("Podaj kolejne 3 liczby :\n");
    int a2, b2, c2;
    printf("Podaj liczbe a2: ");
    scanf("%d", &a2);
    printf("Podaj liczbe b2: ");
    scanf("%d", &b2);
    printf("Podaj liczbe c2: ");
    scanf("%d", &c2);
    double W = a1 * b2 - a2 * b1;
    double Wx = c1 * b2 - c2 * b1;
    double Wy = a1 * c2 - a2 * c1;
    double x = Wx / W;
    double y = Wy / W;
    printf("x: %f\n", x);
    printf("y: %f\n", y);
if( x && y > SIZE_MAX) {
    printf("uklad nie ma rozwiazn");
}
    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.