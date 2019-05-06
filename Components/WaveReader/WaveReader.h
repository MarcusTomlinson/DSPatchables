/************************************************************************
DSPatchables - DSPatch Component Repository
Copyright (c) 2014-2019 Marcus Tomlinson

This file is part of DSPatchables.

GNU Lesser General Public License Usage
This file may be used under the terms of the GNU Lesser General Public
License version 3.0 as published by the Free Software Foundation and
appearing in the file LICENSE included in the packaging of this file.
Please review the following information to ensure the GNU Lesser
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
class WaveReader;
}

class DLLEXPORT WaveReader final : public Component
{
public:
    WaveReader( std::string const& fileName );

protected:
    virtual void Process_( SignalBus const& inputs, SignalBus& outputs ) override;

private:
    std::unique_ptr<internal::WaveReader> p;
};

EXPORT_PLUGIN( WaveReader, getenv("WAVEREADER_FILE") ? getenv("WAVEREADER_FILE") : SAMPLE_WAV_FILE )

}  // namespace DSPatchables
}  // namespace DSPatch
