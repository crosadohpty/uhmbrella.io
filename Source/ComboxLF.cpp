/*
  ==============================================================================

    Combox.cpp
    Created: 15 Mar 2023 11:57:30pm
    Author:  Samuel A. Maldonado

  ==============================================================================
*/

#include "ComboxLF.h"
using namespace juce;

void ComboxLF::drawCombox(juce::ComboBox& combobox, juce::Graphics& g,
    int x, int y, int width, int height, bool isButtonDown) {
    Path p;
    p.addRoundedRectangle(0, 0, width, height, 15.0f);

    g.setColour(findColour(ComboBox::backgroundColourId));
    g.fillPath(p);

    g.setColour(findColour(ComboBox::outlineColourId));
    g.strokePath(p, PathStrokeType(1.0f));

    //LookAndFeel_V4::drawComboBox(g, width, height, isButtonDown, x, y, width, height, combobox);
}
void ComboxLF::drawPopupMenuItem(Graphics& g, const Rectangle<int>& area,
    bool isSeparator, bool isActive, bool isHighlighted, bool isTicked, bool hasSubMenu,
    const String& text, const String& shortcutKeyText,
    const Drawable* icon, const Colour* textColour) 
{
    if (isSeparator) {

    }
    else {
        g.setColour(Colours::black);
        if (isHighlighted) {
            g.setColour(Colours::grey);
        }
        g.fillRect(area);

        g.setColour(Colours::white);
        g.setFont(Font(15.0f, Font::plain));
        const int textX = 4;
        const int textY = 0;

        g.drawText(text, textX, textY, area.getWidth() - textX * 2, area.getHeight(), 
            Justification::centredLeft, true);
       }
}