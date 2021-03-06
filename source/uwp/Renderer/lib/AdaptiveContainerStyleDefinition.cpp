#include "pch.h"
#include "AdaptiveContainerStyleDefinition.h"
#include "AdaptiveColorsConfig.h"

using namespace Microsoft::WRL;
using namespace Microsoft::WRL::Wrappers;

namespace AdaptiveCards { namespace Rendering { namespace Uwp
{
    HRESULT AdaptiveContainerStyleDefinition::RuntimeClassInitialize() noexcept try
    {
        ContainerStyleDefinition styleDefinition;
        return RuntimeClassInitialize(styleDefinition);
    } CATCH_RETURN;


    HRESULT AdaptiveContainerStyleDefinition::RuntimeClassInitialize(ContainerStyleDefinition styleDefinition) noexcept
    {
        RETURN_IF_FAILED(MakeAndInitialize<AdaptiveColorsConfig>(m_foregroundColors.GetAddressOf(), styleDefinition.foregroundColors));
        RETURN_IF_FAILED(GetColorFromString(styleDefinition.backgroundColor, &m_backgroundColor));
        return S_OK;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveContainerStyleDefinition::get_BackgroundColor(ABI::Windows::UI::Color* value)
    {
        *value = m_backgroundColor;
        return S_OK;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveContainerStyleDefinition::put_BackgroundColor(ABI::Windows::UI::Color color)
    {
        m_backgroundColor = color;
        return S_OK;
    }

    _Use_decl_annotations_
    HRESULT  AdaptiveContainerStyleDefinition::get_ForegroundColors(ABI::AdaptiveCards::Rendering::Uwp::IAdaptiveColorsConfig** colorsConfig)
    {
        return m_foregroundColors.CopyTo(colorsConfig);
    }

    _Use_decl_annotations_
    HRESULT  AdaptiveContainerStyleDefinition::put_ForegroundColors(ABI::AdaptiveCards::Rendering::Uwp::IAdaptiveColorsConfig* colorsConfig)
    {
        m_foregroundColors = colorsConfig;
        return S_OK;
    }
}}}
