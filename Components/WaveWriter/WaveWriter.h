/************************************************************************
DSPatchables - DSPatch Component Repository
Copyright (c) 2014-2018 Marcus Tomlinson

This file is part of DSPatchables.

GNU Lesser General Public License Usage
This file may be used under the terms of the GNU Lesser General Public
License version 3.0 as published by the Free Software Foundation and
appearing in the file LGPLv3.txt included in the packaging of this
file. Please review the following information to ensure the GNU Lesser
General Public License version 3.0 requirements will be met:
http://www.gnu.org/copyleft/lgpl.html.

Other Usage
Alternatively, this file may be used in accordance with the terms and
conditions contained in a signed written agreement between you and
Marcus Tomlinson.

DSPatch is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
************************************************************************/

#pragma once

#include <DSPatch.h>

namespace DSPatch
{
namespace DSPatchables
{

namespace internal
{
class WaveWriter;
}

class DLLEXPORT WaveWriter final : public Component
{
public:
    WaveWriter( std::string const& fileName, int channelCount, int bitsPerSample, int sampleRate );
    virtual ~WaveWriter();

protected:
    virtual void Process_( SignalBus const& inputs, SignalBus& outputs ) override;

private:
    std::unique_ptr<internal::WaveWriter> p;
};

EXPORT_PLUGIN( WaveWriter, "WaveWriter.wav", 2, 16, 44100 )

}  // namespace DSPatchables
}  // namespace DSPatch
