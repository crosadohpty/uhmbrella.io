/*
  ==============================================================================

    SampleItem.h
    Created: 17 Mar 2023 8:34:31pm
    Author:  Samuel A. Maldonado

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

using namespace juce;

//==============================================================================
/*
*/
class SampleItem  : public juce::Component
{
public:
    SampleItem(String sampleName, String instrument, String key, Image sampleCover, int BPM , File sampleFile);
    ~SampleItem() override;

    void paint (juce::Graphics&) override;
    void resized() override;

private:
    String sampleName;
    int BPM;
    String instrument;
    String key;
    Image sampleCover;
    Rectangle<int> sampleBox;
    File sampleFile;
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (SampleItem)
};
