/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_IconTooltip1.MapWidget_IconTooltip1_C.Set Text Color
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateColor                                 InColorAndOpacity                                          (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UMapWidget_IconTooltip1_C::SetTextColor(const struct FSlateColor& InColorAndOpacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_IconTooltip1.MapWidget_IconTooltip1_C.Set Text Color");
		
		UMapWidget_IconTooltip1_C_SetTextColor_Params params {};
		params.InColorAndOpacity = InColorAndOpacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_IconTooltip1.MapWidget_IconTooltip1_C.SetTooltipTextureType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_MapWidget_Tooltip1_TextureTypes                  InType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_IconTooltip1_C::SetTooltipTextureType(E_MapWidget_Tooltip1_TextureTypes InType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_IconTooltip1.MapWidget_IconTooltip1_C.SetTooltipTextureType");
		
		UMapWidget_IconTooltip1_C_SetTooltipTextureType_Params params {};
		params.InType = InType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_IconTooltip1.MapWidget_IconTooltip1_C.GetName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        OutName                                                    (Parm, OutParm)
	 */
	void UMapWidget_IconTooltip1_C::GetName(class FText* OutName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_IconTooltip1.MapWidget_IconTooltip1_C.GetName");
		
		UMapWidget_IconTooltip1_C_GetName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutName != nullptr)
			*OutName = params.OutName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_IconTooltip1.MapWidget_IconTooltip1_C.SetName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UMapWidget_IconTooltip1_C::SetName(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_IconTooltip1.MapWidget_IconTooltip1_C.SetName");
		
		UMapWidget_IconTooltip1_C_SetName_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapWidget_IconTooltip1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapWidget_IconTooltip1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MapWidget_IconTooltip1.MapWidget_IconTooltip1_C");
		return ptr;
	}

}


