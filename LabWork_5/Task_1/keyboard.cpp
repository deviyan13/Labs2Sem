#include "keyboard.h"

Keyboard::Keyboard()
{
    this->setSpacing(3);
    this->setContentsMargins(0,0,0,0);
    this->setAlignment(Qt::AlignCenter);

    initializeKeyButtonVector();

    firstRow = new QHBoxLayout();
    secondRow = new QHBoxLayout();
    thirdRow = new QHBoxLayout();
    fourthRow = new QHBoxLayout();
    fifthRow = new QHBoxLayout();

    for(int i = 0; i < 14; i++)
    {
        if(buttons[i] == backspaceButton) buttons[i]->setFixedSize(75, 50);
        firstRow->addWidget(buttons[i]);
    }
    for(int i = 14; i < 14 + 14; i++)
    {
        if(buttons[i] == tabButton) buttons[i]->setFixedSize(75, 50);
        secondRow->addWidget(buttons[i]);
    }
    for(int i = 28; i < 28 + 13; i++)
    {
        if(buttons[i] == capsLockButton) buttons[i]->setFixedSize(88, 50);
        if(buttons[i] == enterButton) buttons[i]->setFixedSize(88, 50);
        thirdRow->addWidget(buttons[i]);
    }
    for(int i = 41; i < 41 + 12; i++)
    {
        if(buttons[i] == leftShiftButton) buttons[i]->setFixedSize(113, 50);
        if(buttons[i] == rightShiftButton) buttons[i]->setFixedSize(113, 50);
        fourthRow->addWidget(buttons[i]);
    }
    for(int i = 53; i < 53 + 8; i++)
    {
        if(buttons[i] == spaceButton) buttons[i]->setFixedSize(375, 50);
        fifthRow->addWidget(buttons[i]);
    }

    this->addLayout(firstRow);
    this->addLayout(secondRow);
    this->addLayout(thirdRow);
    this->addLayout(fourthRow);
    this->addLayout(fifthRow);


    initializeKeyButtonMap();

}


void Keyboard::initializeKeyButtonVector()
{
    graveButton = new QPushButton("`");
    num1Button = new QPushButton("1");
    num2Button = new QPushButton("2");
    num3Button = new QPushButton("3");
    num4Button = new QPushButton("4");
    num5Button = new QPushButton("5");
    num6Button = new QPushButton("6");
    num7Button = new QPushButton("7");
    num8Button = new QPushButton("8");
    num9Button = new QPushButton("9");
    num0Button = new QPushButton("0");
    minusButton = new QPushButton("-");
    equalButton = new QPushButton("=");
    backspaceButton = new QPushButton("Backspace");

    buttons.push_back(graveButton);
    buttons.push_back(num1Button);
    buttons.push_back(num2Button);
    buttons.push_back(num3Button);
    buttons.push_back(num4Button);
    buttons.push_back(num5Button);
    buttons.push_back(num6Button);
    buttons.push_back(num7Button);
    buttons.push_back(num8Button);
    buttons.push_back(num9Button);
    buttons.push_back(num0Button);
    buttons.push_back(minusButton);
    buttons.push_back(equalButton);
    buttons.push_back(backspaceButton);





    tabButton = new QPushButton("Tab");
    qButton = new QPushButton("q");
    wButton = new QPushButton("w");
    eButton = new QPushButton("e");
    rButton = new QPushButton("r");
    tButton = new QPushButton("t");
    yButton = new QPushButton("y");
    uButton = new QPushButton("u");
    iButton = new QPushButton("i");
    oButton = new QPushButton("o");
    pButton = new QPushButton("p");
    leftSquareScopeButton = new QPushButton("[");
    rightSquareScopeButton = new QPushButton("]");
    backSlashButton = new QPushButton("\\");

    buttons.push_back(tabButton);
    buttons.push_back(qButton);
    buttons.push_back(wButton);
    buttons.push_back(eButton);
    buttons.push_back(rButton);
    buttons.push_back(tButton);
    buttons.push_back(yButton);
    buttons.push_back(uButton);
    buttons.push_back(iButton);
    buttons.push_back(oButton);
    buttons.push_back(pButton);
    buttons.push_back(leftSquareScopeButton);
    buttons.push_back(rightSquareScopeButton);
    buttons.push_back(backSlashButton);


    capsLockButton = new QPushButton("Caps Lock");
    aButton = new QPushButton("a");
    sButton = new QPushButton("s");
    dButton = new QPushButton("d");
    fButton = new QPushButton("f");
    gButton = new QPushButton("g");
    hButton = new QPushButton("h");
    jButton = new QPushButton("j");
    kButton = new QPushButton("k");
    lButton = new QPushButton("l");
    semicolonButton = new QPushButton(";");
    apostropheButton = new QPushButton("'");
    enterButton = new QPushButton("Enter");

    buttons.push_back(capsLockButton);
    buttons.push_back(aButton);
    buttons.push_back(sButton);
    buttons.push_back(dButton);
    buttons.push_back(fButton);
    buttons.push_back(gButton);
    buttons.push_back(hButton);
    buttons.push_back(jButton);
    buttons.push_back(kButton);
    buttons.push_back(lButton);
    buttons.push_back(semicolonButton);
    buttons.push_back(apostropheButton);
    buttons.push_back(enterButton);



    leftShiftButton = new QPushButton("Shift");
    zButton = new QPushButton("z");
    xButton = new QPushButton("x");
    cButton = new QPushButton("c");
    vButton = new QPushButton("v");
    bButton = new QPushButton("b");
    nButton = new QPushButton("n");
    mButton = new QPushButton("m");
    commaButton = new QPushButton(",");
    dotButton = new QPushButton(".");
    slashButton = new QPushButton("/");
    rightShiftButton = new QPushButton("Shift");

    buttons.push_back(leftShiftButton);
    buttons.push_back(zButton);
    buttons.push_back(xButton);
    buttons.push_back(cButton);
    buttons.push_back(vButton);
    buttons.push_back(bButton);
    buttons.push_back(nButton);
    buttons.push_back(mButton);
    buttons.push_back(commaButton);
    buttons.push_back(dotButton);
    buttons.push_back(slashButton);
    buttons.push_back(rightShiftButton);





    leftCtrlButton = new QPushButton("Ctrl");
    leftFnButton = new QPushButton("Fn");
    winButton = new QPushButton("⊞");
    leftAltButton = new QPushButton("Alt");
    spaceButton = new QPushButton("");
    rightAltButton = new QPushButton("Alt");
    rightFnButton = new QPushButton("Fn");
    rightCtrlButton  = new QPushButton("Ctrl");


    buttons.push_back(leftCtrlButton);
    buttons.push_back(leftFnButton);
    buttons.push_back(winButton);
    buttons.push_back(leftAltButton);
    buttons.push_back(spaceButton);
    buttons.push_back(rightAltButton);
    buttons.push_back(rightFnButton);
    buttons.push_back(rightCtrlButton);

    for(int i = 0; i < buttons.size(); i++)
    {
        buttons[i]->setFixedSize(50,50);
        buttons[i]->setFocusPolicy(Qt::FocusPolicy::NoFocus);
    }


}

void Keyboard::initializeKeyButtonMap()
{
    keyButtonMap["`"] = graveButton;
    keyButtonMap["1"] = num1Button;
    keyButtonMap["2"] = num2Button;
    keyButtonMap["3"] = num3Button;
    keyButtonMap["4"] = num4Button;
    keyButtonMap["5"] = num5Button;
    keyButtonMap["6"] = num6Button;
    keyButtonMap["7"] = num7Button;
    keyButtonMap["8"] = num8Button;
    keyButtonMap["9"] = num9Button;
    keyButtonMap["0"] = num0Button;
    keyButtonMap["-"] = minusButton;
    keyButtonMap["="] = equalButton;
    keyButtonMap["\b"] = backspaceButton;

    keyButtonMap["Tab"] = tabButton;
    keyButtonMap["q"] = qButton;
    keyButtonMap["w"] = wButton;
    keyButtonMap["e"] = eButton;
    keyButtonMap["r"] = rButton;
    keyButtonMap["t"] = tButton;
    keyButtonMap["y"] = yButton;
    keyButtonMap["u"] = uButton;
    keyButtonMap["i"] = iButton;
    keyButtonMap["o"] = oButton;
    keyButtonMap["p"] = pButton;
    keyButtonMap["["] = leftSquareScopeButton;
    keyButtonMap["]"] = rightSquareScopeButton;
    keyButtonMap["\\"] = backSlashButton;

    keyButtonMap["Caps Lock"] = capsLockButton;
    keyButtonMap["a"] = aButton;
    keyButtonMap["s"] = sButton;
    keyButtonMap["d"] = dButton;
    keyButtonMap["f"] = fButton;
    keyButtonMap["g"] = gButton;
    keyButtonMap["h"] = hButton;
    keyButtonMap["j"] = jButton;
    keyButtonMap["k"] = kButton;
    keyButtonMap["l"] = lButton;
    keyButtonMap[";"] = semicolonButton;
    keyButtonMap["'"] = apostropheButton;
    keyButtonMap["Enter"] = enterButton;

    keyButtonMap["Left Shift"] = leftShiftButton;
    keyButtonMap["z"] = zButton;
    keyButtonMap["x"] = xButton;
    keyButtonMap["c"] = cButton;
    keyButtonMap["v"] = vButton;
    keyButtonMap["b"] = bButton;
    keyButtonMap["n"] = nButton;
    keyButtonMap["m"] = mButton;
    keyButtonMap[","] = commaButton;
    keyButtonMap["."] = dotButton;
    keyButtonMap["/"] = slashButton;
    keyButtonMap["Right Shift"] = rightShiftButton;

    keyButtonMap["Left Ctrl"] = leftCtrlButton;
    keyButtonMap["Fn"] = leftFnButton;
    keyButtonMap["⊞"] = winButton;
    keyButtonMap["Left Alt"] = leftAltButton;
    keyButtonMap[" "] = spaceButton;
    keyButtonMap["Right Alt"] = rightAltButton;
    keyButtonMap["Fn"] = rightFnButton;
    keyButtonMap["Right Ctrl"] = rightCtrlButton;
}

void Keyboard::setBelaruisan()
{
    graveButton->setText("ё");
    num1Button->setText("1");
    num2Button->setText("2");
    num3Button->setText("3");
    num4Button->setText("4");
    num5Button->setText("5");
    num6Button->setText("6");
    num7Button->setText("7");
    num8Button->setText("8");
    num9Button->setText("9");
    num0Button->setText("0");
    minusButton->setText("-");
    equalButton->setText("=");


    qButton->setText("й");
    wButton->setText("ц");
    eButton->setText("у");
    rButton->setText("к");
    tButton->setText("е");
    yButton->setText("н");
    uButton->setText("г");
    iButton->setText("ш");
    oButton->setText("ў");
    pButton->setText("з");

    leftSquareScopeButton->setText("х");
    rightSquareScopeButton->setText("'");
    backSlashButton->setText("\\");

    aButton->setText("ф");
    sButton->setText("ы");
    dButton->setText("в");
    fButton->setText("а");
    gButton->setText("п");
    hButton->setText("р");
    jButton->setText("о");
    kButton->setText("л");
    lButton->setText("д");
    semicolonButton->setText("ж");
    apostropheButton->setText("э");

    zButton->setText("я");
    xButton->setText("ч");
    cButton->setText("с");
    vButton->setText("м");
    bButton->setText("і");
    nButton->setText("т");
    mButton->setText("ь");
    commaButton->setText("б");
    dotButton->setText("ю");
    slashButton->setText(".");

    keyButtonMap.clear();
    keyButtonMap["\b"] = backspaceButton;
    keyButtonMap["Tab"] = tabButton;
    keyButtonMap["Caps Lock"] = capsLockButton;
    keyButtonMap["Enter"] = enterButton;
    keyButtonMap["Left Shift"] = leftShiftButton;
    keyButtonMap["Right Shift"] = rightShiftButton;
    keyButtonMap["Left Ctrl"] = leftCtrlButton;
    keyButtonMap["Fn"] = leftFnButton;
    keyButtonMap["⊞"] = winButton;
    keyButtonMap["Left Alt"] = leftAltButton;
    keyButtonMap[" "] = spaceButton;
    keyButtonMap["Right Alt"] = rightAltButton;
    keyButtonMap["Fn"] = rightFnButton;
    keyButtonMap["Right Ctrl"] = rightCtrlButton;


    keyButtonMap["ё"] = graveButton;
    keyButtonMap["1"] = num1Button;
    keyButtonMap["2"] = num2Button;
    keyButtonMap["3"] = num3Button;
    keyButtonMap["4"] = num4Button;
    keyButtonMap["5"] = num5Button;
    keyButtonMap["6"] = num6Button;
    keyButtonMap["7"] = num7Button;
    keyButtonMap["8"] = num8Button;
    keyButtonMap["9"] = num9Button;
    keyButtonMap["0"] = num0Button;
    keyButtonMap["-"] = minusButton;
    keyButtonMap["="] = equalButton;

    keyButtonMap["й"] = qButton;
    keyButtonMap["ц"] = wButton;
    keyButtonMap["у"] = eButton;
    keyButtonMap["к"] = rButton;
    keyButtonMap["е"] = tButton;
    keyButtonMap["н"] = yButton;
    keyButtonMap["г"] = uButton;
    keyButtonMap["ш"] = iButton;
    keyButtonMap["ў"] = oButton;
    keyButtonMap["з"] = pButton;
    keyButtonMap["х"] = leftSquareScopeButton;
    keyButtonMap["'"] = rightSquareScopeButton;
    keyButtonMap["\\"] = backSlashButton;

    keyButtonMap["ф"] = aButton;
    keyButtonMap["ы"] = sButton;
    keyButtonMap["в"] = dButton;
    keyButtonMap["а"] = fButton;
    keyButtonMap["п"] = gButton;
    keyButtonMap["р"] = hButton;
    keyButtonMap["о"] = jButton;
    keyButtonMap["л"] = kButton;
    keyButtonMap["д"] = lButton;
    keyButtonMap["ж"] = semicolonButton;
    keyButtonMap["э"] = apostropheButton;

    keyButtonMap["я"] = zButton;
    keyButtonMap["ч"] = xButton;
    keyButtonMap["с"] = cButton;
    keyButtonMap["м"] = vButton;
    keyButtonMap["і"] = bButton;
    keyButtonMap["т"] = nButton;
    keyButtonMap["ь"] = mButton;
    keyButtonMap["б"] = commaButton;
    keyButtonMap["ю"] = dotButton;
    keyButtonMap["."] = slashButton;
}

void Keyboard::setGerman()
{
    graveButton->setText("^");
    num1Button->setText("1");
    num2Button->setText("2");
    num3Button->setText("3");
    num4Button->setText("4");
    num5Button->setText("5");
    num6Button->setText("6");
    num7Button->setText("7");
    num8Button->setText("8");
    num9Button->setText("9");
    num0Button->setText("0");
    minusButton->setText("ß");
    equalButton->setText("´");

    qButton->setText("q");
    wButton->setText("w");
    eButton->setText("e");
    rButton->setText("r");
    tButton->setText("t");
    yButton->setText("z");
    uButton->setText("u");
    iButton->setText("i");
    oButton->setText("o");
    pButton->setText("p");
    leftSquareScopeButton->setText("ü");
    rightSquareScopeButton->setText("+");
    backSlashButton->setText("#");

    aButton->setText("a");
    sButton->setText("s");
    dButton->setText("d");
    fButton->setText("f");
    gButton->setText("g");
    hButton->setText("h");
    jButton->setText("j");
    kButton->setText("k");
    lButton->setText("l");
    semicolonButton->setText("ö");
    apostropheButton->setText("ä");

    zButton->setText("y");
    xButton->setText("x");
    cButton->setText("c");
    vButton->setText("v");
    bButton->setText("b");
    nButton->setText("n");
    mButton->setText("m");
    commaButton->setText(",");
    dotButton->setText(".");
    slashButton->setText("-");

    keyButtonMap.clear();
    keyButtonMap["\b"] = backspaceButton;
    keyButtonMap["Tab"] = tabButton;
    keyButtonMap["Caps Lock"] = capsLockButton;
    keyButtonMap["Enter"] = enterButton;
    keyButtonMap["Left Shift"] = leftShiftButton;
    keyButtonMap["Right Shift"] = rightShiftButton;
    keyButtonMap["Left Ctrl"] = leftCtrlButton;
    keyButtonMap["Fn"] = leftFnButton;
    keyButtonMap["⊞"] = winButton;
    keyButtonMap["Left Alt"] = leftAltButton;
    keyButtonMap[" "] = spaceButton;
    keyButtonMap["Right Alt"] = rightAltButton;
    keyButtonMap["Fn"] = rightFnButton;
    keyButtonMap["Right Ctrl"] = rightCtrlButton;



    keyButtonMap["^"] = graveButton;
    keyButtonMap["1"] = num1Button;
    keyButtonMap["2"] = num2Button;
    keyButtonMap["3"] = num3Button;
    keyButtonMap["4"] = num4Button;
    keyButtonMap["5"] = num5Button;
    keyButtonMap["6"] = num6Button;
    keyButtonMap["7"] = num7Button;
    keyButtonMap["8"] = num8Button;
    keyButtonMap["9"] = num9Button;
    keyButtonMap["0"] = num0Button;
    keyButtonMap["ß"] = minusButton;
    keyButtonMap["´"] = equalButton;

    keyButtonMap["q"] = qButton;
    keyButtonMap["w"] = wButton;
    keyButtonMap["e"] = eButton;
    keyButtonMap["r"] = rButton;
    keyButtonMap["t"] = tButton;
    keyButtonMap["z"] = yButton;
    keyButtonMap["u"] = uButton;
    keyButtonMap["i"] = iButton;
    keyButtonMap["o"] = oButton;
    keyButtonMap["p"] = pButton;
    keyButtonMap["ü"] = leftSquareScopeButton;
    keyButtonMap["+"] = rightSquareScopeButton;
    keyButtonMap["#"] = backSlashButton;

    keyButtonMap["a"] = aButton;
    keyButtonMap["s"] = sButton;
    keyButtonMap["d"] = dButton;
    keyButtonMap["f"] = fButton;
    keyButtonMap["g"] = gButton;
    keyButtonMap["h"] = hButton;
    keyButtonMap["j"] = jButton;
    keyButtonMap["k"] = kButton;
    keyButtonMap["l"] = lButton;
    keyButtonMap["ö"] = semicolonButton;
    keyButtonMap["ä"] = apostropheButton;


    keyButtonMap["y"] = zButton;
    keyButtonMap["x"] = xButton;
    keyButtonMap["c"] = cButton;
    keyButtonMap["v"] = vButton;
    keyButtonMap["b"] = bButton;
    keyButtonMap["n"] = nButton;
    keyButtonMap["m"] = mButton;
    keyButtonMap[","] = commaButton;
    keyButtonMap["."] = dotButton;
    keyButtonMap["-"] = slashButton;
}

void Keyboard::setFrench()
{
    graveButton->setText("²");
    num1Button->setText("&&");
    num2Button->setText("é");
    num3Button->setText("\"");
    num4Button->setText("'");
    num5Button->setText("(");
    num6Button->setText("-");
    num7Button->setText("è");
    num8Button->setText("_");
    num9Button->setText("ç");
    num0Button->setText("à");
    minusButton->setText(")");
    equalButton->setText("=");

    qButton->setText("a");
    wButton->setText("z");
    eButton->setText("e");
    rButton->setText("r");
    tButton->setText("t");
    yButton->setText("y");
    uButton->setText("u");
    iButton->setText("i");
    oButton->setText("o");
    pButton->setText("p");
    leftSquareScopeButton->setText("^");
    rightSquareScopeButton->setText("$");
    backSlashButton->setText("*");

    aButton->setText("q");
    sButton->setText("s");
    dButton->setText("d");
    fButton->setText("f");
    gButton->setText("g");
    hButton->setText("h");
    jButton->setText("j");
    kButton->setText("k");
    lButton->setText("l");
    semicolonButton->setText("m");
    apostropheButton->setText("ù");

    zButton->setText("w");
    xButton->setText("x");
    cButton->setText("c");
    vButton->setText("v");
    bButton->setText("b");
    nButton->setText("n");
    mButton->setText(",");
    commaButton->setText(";");
    dotButton->setText(":");
    slashButton->setText("!");

    keyButtonMap.clear();
    keyButtonMap["\b"] = backspaceButton;
    keyButtonMap["Tab"] = tabButton;
    keyButtonMap["Caps Lock"] = capsLockButton;
    keyButtonMap["Enter"] = enterButton;
    keyButtonMap["Left Shift"] = leftShiftButton;
    keyButtonMap["Right Shift"] = rightShiftButton;
    keyButtonMap["Left Ctrl"] = leftCtrlButton;
    keyButtonMap["Fn"] = leftFnButton;
    keyButtonMap["⊞"] = winButton;
    keyButtonMap["Left Alt"] = leftAltButton;
    keyButtonMap[" "] = spaceButton;
    keyButtonMap["Right Alt"] = rightAltButton;
    keyButtonMap["Fn"] = rightFnButton;
    keyButtonMap["Right Ctrl"] = rightCtrlButton;

    keyButtonMap["²"] = graveButton;
    keyButtonMap["&"] = num1Button;
    keyButtonMap["é"] = num2Button;
    keyButtonMap["\""] = num3Button;
    keyButtonMap["'"] = num4Button;
    keyButtonMap["("] = num5Button;
    keyButtonMap["-"] = num6Button;
    keyButtonMap["è"] = num7Button;
    keyButtonMap["_"] = num8Button;
    keyButtonMap["ç"] = num9Button;
    keyButtonMap["à"] = num0Button;
    keyButtonMap[")"] = minusButton;
    keyButtonMap["="] = equalButton;

    keyButtonMap["a"] = qButton;
    keyButtonMap["z"] = wButton;
    keyButtonMap["e"] = eButton;
    keyButtonMap["r"] = rButton;
    keyButtonMap["t"] = tButton;
    keyButtonMap["y"] = yButton;
    keyButtonMap["u"] = uButton;
    keyButtonMap["i"] = iButton;
    keyButtonMap["o"] = oButton;
    keyButtonMap["p"] = pButton;
    keyButtonMap["^"] = leftSquareScopeButton;
    keyButtonMap["$"] = rightSquareScopeButton;
    keyButtonMap["*"] = backSlashButton;

    keyButtonMap["q"] = aButton;
    keyButtonMap["s"] = sButton;
    keyButtonMap["d"] = dButton;
    keyButtonMap["f"] = fButton;
    keyButtonMap["g"] = gButton;
    keyButtonMap["h"] = hButton;
    keyButtonMap["j"] = jButton;
    keyButtonMap["k"] = kButton;
    keyButtonMap["l"] = lButton;
    keyButtonMap["m"] = semicolonButton;
    keyButtonMap["ù"] = apostropheButton;

    keyButtonMap["w"] = zButton;
    keyButtonMap["x"] = xButton;
    keyButtonMap["c"] = cButton;
    keyButtonMap["v"] = vButton;
    keyButtonMap["b"] = bButton;
    keyButtonMap["n"] = nButton;
    keyButtonMap[","] = mButton;
    keyButtonMap[";"] = commaButton;
    keyButtonMap[":"] = dotButton;
    keyButtonMap["!"] = slashButton;
}

void Keyboard::setArabic()
{
    graveButton->setText("ذ");
    num1Button->setText("1");
    num2Button->setText("2");
    num3Button->setText("3");
    num4Button->setText("4");
    num5Button->setText("5");
    num6Button->setText("6");
    num7Button->setText("7");
    num8Button->setText("8");
    num9Button->setText("9");
    num0Button->setText("0");
    minusButton->setText("-");
    equalButton->setText("=");

    qButton->setText("ض");
    wButton->setText("ص");
    eButton->setText("ث");
    rButton->setText("ق");
    tButton->setText("ف");
    yButton->setText("غ");
    uButton->setText("ع");
    iButton->setText("ه");
    oButton->setText("خ");
    pButton->setText("ح");
    leftSquareScopeButton->setText("ج");
    rightSquareScopeButton->setText("د");
    backSlashButton->setText("\\");

    aButton->setText("ش");
    sButton->setText("س");
    dButton->setText("ي");
    fButton->setText("ب");
    gButton->setText("ل");
    hButton->setText("ا");
    jButton->setText("ت");
    kButton->setText("ن");
    lButton->setText("م");
    semicolonButton->setText("ك");
    apostropheButton->setText("ط");

    zButton->setText("ئ");
    xButton->setText("ء");
    cButton->setText("ؤ");
    vButton->setText("ر");
    bButton->setText("ﻻ");
    nButton->setText("ى");
    mButton->setText("ة");
    commaButton->setText("و");
    dotButton->setText("ز");
    slashButton->setText("ظ");

    keyButtonMap.clear();
    keyButtonMap["\b"] = backspaceButton;
    keyButtonMap["Tab"] = tabButton;
    keyButtonMap["Caps Lock"] = capsLockButton;
    keyButtonMap["Enter"] = enterButton;
    keyButtonMap["Left Shift"] = leftShiftButton;
    keyButtonMap["Right Shift"] = rightShiftButton;
    keyButtonMap["Left Ctrl"] = leftCtrlButton;
    keyButtonMap["Fn"] = leftFnButton;
    keyButtonMap["⊞"] = winButton;
    keyButtonMap["Left Alt"] = leftAltButton;
    keyButtonMap[" "] = spaceButton;
    keyButtonMap["Right Alt"] = rightAltButton;
    keyButtonMap["Fn"] = rightFnButton;
    keyButtonMap["Right Ctrl"] = rightCtrlButton;

    keyButtonMap["ذ"] = graveButton;
    keyButtonMap["1"] = num1Button;
    keyButtonMap["2"] = num2Button;
    keyButtonMap["3"] = num3Button;
    keyButtonMap["4"] = num4Button;
    keyButtonMap["5"] = num5Button;
    keyButtonMap["6"] = num6Button;
    keyButtonMap["7"] = num7Button;
    keyButtonMap["8"] = num8Button;
    keyButtonMap["9"] = num9Button;
    keyButtonMap["0"] = num0Button;
    keyButtonMap["-"] = minusButton;
    keyButtonMap["="] = equalButton;

    keyButtonMap["ض"] = qButton;
    keyButtonMap["ص"] = wButton;
    keyButtonMap["ث"] = eButton;
    keyButtonMap["ق"] = rButton;
    keyButtonMap["ف"] = tButton;
    keyButtonMap["غ"] = yButton;
    keyButtonMap["ع"] = uButton;
    keyButtonMap["ه"] = iButton;
    keyButtonMap["خ"] = oButton;
    keyButtonMap["ح"] = pButton;
    keyButtonMap["ج"] = leftSquareScopeButton;
    keyButtonMap["د"] = rightSquareScopeButton;
    keyButtonMap["\\"] = backSlashButton;

    keyButtonMap["ش"] = aButton;
    keyButtonMap["س"] = sButton;
    keyButtonMap["ي"] = dButton;
    keyButtonMap["ب"] = fButton;
    keyButtonMap["ل"] = gButton;
    keyButtonMap["ا"] = hButton;
    keyButtonMap["ت"] = jButton;
    keyButtonMap["ن"] = kButton;
    keyButtonMap["م"] = lButton;
    keyButtonMap["ك"] = semicolonButton;
    keyButtonMap["ط"] = apostropheButton;

    keyButtonMap["ئ"] = zButton;
    keyButtonMap["ء"] = xButton;
    keyButtonMap["ؤ"] = cButton;
    keyButtonMap["ر"] = vButton;
    keyButtonMap["ﻻ"] = bButton;
    keyButtonMap["ى"] = nButton;
    keyButtonMap["ة"] = mButton;
    keyButtonMap["و"] = commaButton;
    keyButtonMap["ز"] = dotButton;
    keyButtonMap["ظ"] = slashButton;
}

void Keyboard::setHebrew()
{
    graveButton->setText(";");
    num1Button->setText("1");
    num2Button->setText("2");
    num3Button->setText("3");
    num4Button->setText("4");
    num5Button->setText("5");
    num6Button->setText("6");
    num7Button->setText("7");
    num8Button->setText("8");
    num9Button->setText("9");
    num0Button->setText("0");
    minusButton->setText("-");
    equalButton->setText("=");

    qButton->setText("/");
    wButton->setText("'");
    eButton->setText("ק");
    rButton->setText("ר");
    tButton->setText("א");
    yButton->setText("ט");
    uButton->setText("ו");
    iButton->setText("ן");
    oButton->setText("ם");
    pButton->setText("פ");
    leftSquareScopeButton->setText("]");
    rightSquareScopeButton->setText("[");
    backSlashButton->setText("\\");

    aButton->setText("ש");
    sButton->setText("ד");
    dButton->setText("ג");
    fButton->setText("כ");
    gButton->setText("ע");
    hButton->setText("י");
    jButton->setText("ח");
    kButton->setText("ל");
    lButton->setText("ך");
    semicolonButton->setText("ף");
    apostropheButton->setText(",");

    zButton->setText("ז");
    xButton->setText("ס");
    cButton->setText("ב");
    vButton->setText("ה");
    bButton->setText("נ");
    nButton->setText("מ");
    mButton->setText("צ");
    commaButton->setText("ת");
    dotButton->setText("ץ");
    slashButton->setText(".");


    keyButtonMap.clear();
    keyButtonMap["\b"] = backspaceButton;
    keyButtonMap["Tab"] = tabButton;
    keyButtonMap["Caps Lock"] = capsLockButton;
    keyButtonMap["Enter"] = enterButton;
    keyButtonMap["Left Shift"] = leftShiftButton;
    keyButtonMap["Right Shift"] = rightShiftButton;
    keyButtonMap["Left Ctrl"] = leftCtrlButton;
    keyButtonMap["Fn"] = leftFnButton;
    keyButtonMap["⊞"] = winButton;
    keyButtonMap["Left Alt"] = leftAltButton;
    keyButtonMap[" "] = spaceButton;
    keyButtonMap["Right Alt"] = rightAltButton;
    keyButtonMap["Fn"] = rightFnButton;
    keyButtonMap["Right Ctrl"] = rightCtrlButton;



    keyButtonMap[";"] = graveButton;
    keyButtonMap["1"] = num1Button;
    keyButtonMap["2"] = num2Button;
    keyButtonMap["3"] = num3Button;
    keyButtonMap["4"] = num4Button;
    keyButtonMap["5"] = num5Button;
    keyButtonMap["6"] = num6Button;
    keyButtonMap["7"] = num7Button;
    keyButtonMap["8"] = num8Button;
    keyButtonMap["9"] = num9Button;
    keyButtonMap["0"] = num0Button;
    keyButtonMap["-"] = minusButton;
    keyButtonMap["="] = equalButton;

    keyButtonMap["/"] = qButton;
    keyButtonMap["'"] = wButton;
    keyButtonMap["ק"] = eButton;
    keyButtonMap["ר"] = rButton;
    keyButtonMap["א"] = tButton;
    keyButtonMap["ט"] = yButton;
    keyButtonMap["ו"] = uButton;
    keyButtonMap["ן"] = iButton;
    keyButtonMap["ם"] = oButton;
    keyButtonMap["פ"] = pButton;
    keyButtonMap["]"] = leftSquareScopeButton;
    keyButtonMap["["] = rightSquareScopeButton;
    keyButtonMap["\\"] = backSlashButton;

    keyButtonMap["ש"] = aButton;
    keyButtonMap["ד"] = sButton;
    keyButtonMap["ג"] = dButton;
    keyButtonMap["כ"] = fButton;
    keyButtonMap["ע"] = gButton;
    keyButtonMap["י"] = hButton;
    keyButtonMap["ח"] = jButton;
    keyButtonMap["ל"] = kButton;
    keyButtonMap["ך"] = lButton;
    keyButtonMap["ף"] = semicolonButton;
    keyButtonMap[","] = apostropheButton;

    keyButtonMap["ז"] = zButton;
    keyButtonMap["ס"] = xButton;
    keyButtonMap["ב"] = cButton;
    keyButtonMap["ה"] = vButton;
    keyButtonMap["נ"] = bButton;
    keyButtonMap["מ"] = nButton;
    keyButtonMap["צ"] = mButton;
    keyButtonMap["ת"] = commaButton;
    keyButtonMap["ץ"] = dotButton;
    keyButtonMap["."] = slashButton;
}


void Keyboard::keyPressEvent(QKeyEvent *event)
{
    if(keyButtonMap.contains(event->text()))
    {
        keyButtonMap[event->text()]->animateClick();
    }
    if(event->key() == Qt::Key_CapsLock)
    {
        keyButtonMap["Caps Lock"]->animateClick();
    }
    if(event->key() == Qt::Key_Tab)
    {
        keyButtonMap["Tab"]->animateClick();
    }
    if(event->text() == "\r")
    {
        keyButtonMap["Enter"]->animateClick();
    }
    if (event->key() == Qt::Key_Meta) {
        keyButtonMap["winButton"]->animateClick();
    }



    //left anf right shift
    if(event->key() == Qt::Key_Shift)
    {
        if(event->nativeVirtualKey() == 65505) keyButtonMap["Left Shift"]->animateClick();

        else keyButtonMap["Right Shift"]->animateClick();
    }
    //left and right control
    if(event->key() == Qt::Key_Control)
    {
        if(event->nativeVirtualKey() == 65507) keyButtonMap["Left Ctrl"]->animateClick();

        else keyButtonMap["Right Ctrl"]->animateClick();
    }
    //left alt
    if(event->key() == 16777251)
    {
        keyButtonMap["Left Alt"]->animateClick();
    }
    //right alt
    if(event->key() == 16781571)
    {
        keyButtonMap["Right Alt"]->animateClick();
    }
    if(event->key() == 16781906)
    {
        keyButtonMap["^"]->animateClick();
    }
    if(event->key() == 16781905)
    {
        keyButtonMap["´"]->animateClick();
    }


    qDebug() << event->text() << event->nativeVirtualKey() << event->modifiers() << event->key();
}
