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
	 * 		Name   -> Function MapWidget_CommonSymbolIcon.MapWidget_CommonSymbolIcon_C.SetTooltipTextColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateColor                                 InColorAndOpacity                                          (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UMapWidget_CommonSymbolIcon_C::SetTooltipTextColor(const struct FSlateColor& InColorAndOpacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_CommonSymbolIcon.MapWidget_CommonSymbolIcon_C.SetTooltipTextColor");
		
		UMapWidget_CommonSymbolIcon_C_SetTooltipTextColor_Params params {};
		params.InColorAndOpacity = InColorAndOpacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_CommonSymbolIcon.MapWidget_CommonSymbolIcon_C.GetTooltipText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      OutTooltipText                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UMapWidget_CommonSymbolIcon_C::GetTooltipText(class FString* OutTooltipText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_CommonSymbolIcon.MapWidget_CommonSymbolIcon_C.GetTooltipText");
		
		UMapWidget_CommonSymbolIcon_C_GetTooltipText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutTooltipText != nullptr)
			*OutTooltipText = params.OutTooltipText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_CommonSymbolIcon.MapWidget_CommonSymbolIcon_C.SetIconTextureBySymbolIconType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMapSymbolIconType                                 InSymbolIconType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_CommonSymbolIcon_C::SetIconTextureBySymbolIconType(EMapSymbolIconType InSymbolIconType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_CommonSymbolIcon.MapWidget_CommonSymbolIcon_C.SetIconTextureBySymbolIconType");
		
		UMapWidget_CommonSymbolIcon_C_SetIconTextureBySymbolIconType_Params params {};
		params.InSymbolIconType = InSymbolIconType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_CommonSymbolIcon.MapWidget_CommonSymbolIcon_C.SetIconTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  InTexture                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_CommonSymbolIcon_C::SetIconTexture(class UTexture2D* InTexture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_CommonSymbolIcon.MapWidget_CommonSymbolIcon_C.SetIconTexture");
		
		UMapWidget_CommonSymbolIcon_C_SetIconTexture_Params params {};
		params.InTexture = InTexture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_CommonSymbolIcon.MapWidget_CommonSymbolIcon_C.SetTextToTooltip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UMapWidget_CommonSymbolIcon_C::SetTextToTooltip(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_CommonSymbolIcon.MapWidget_CommonSymbolIcon_C.SetTextToTooltip");
		
		UMapWidget_CommonSymbolIcon_C_SetTextToTooltip_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_CommonSymbolIcon.MapWidget_CommonSymbolIcon_C.SetTooltipEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEnable                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMapWidget_CommonSymbolIcon_C::SetTooltipEnable(bool IsEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_CommonSymbolIcon.MapWidget_CommonSymbolIcon_C.SetTooltipEnable");
		
		UMapWidget_CommonSymbolIcon_C_SetTooltipEnable_Params params {};
		params.IsEnable = IsEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_CommonSymbolIcon.MapWidget_CommonSymbolIcon_C.GetToolTipWidget_1
	 * 		Flags  -> ()
	 */
	class UWidget* UMapWidget_CommonSymbolIcon_C::GetToolTipWidget_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_CommonSymbolIcon.MapWidget_CommonSymbolIcon_C.GetToolTipWidget_1");
		
		UMapWidget_CommonSymbolIcon_C_GetToolTipWidget_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_CommonSymbolIcon.MapWidget_CommonSymbolIcon_C.Construct
	 * 		Flags  -> ()
	 */
	void UMapWidget_CommonSymbolIcon_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_CommonSymbolIcon.MapWidget_CommonSymbolIcon_C.Construct");
		
		UMapWidget_CommonSymbolIcon_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_CommonSymbolIcon.MapWidget_CommonSymbolIcon_C.PlayPublicDungeonAnimation
	 * 		Flags  -> ()
	 */
	void UMapWidget_CommonSymbolIcon_C::PlayPublicDungeonAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_CommonSymbolIcon.MapWidget_CommonSymbolIcon_C.PlayPublicDungeonAnimation");
		
		UMapWidget_CommonSymbolIcon_C_PlayPublicDungeonAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_CommonSymbolIcon.MapWidget_CommonSymbolIcon_C.ExecuteUbergraph_MapWidget_CommonSymbolIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_CommonSymbolIcon_C::ExecuteUbergraph_MapWidget_CommonSymbolIcon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_CommonSymbolIcon.MapWidget_CommonSymbolIcon_C.ExecuteUbergraph_MapWidget_CommonSymbolIcon");
		
		UMapWidget_CommonSymbolIcon_C_ExecuteUbergraph_MapWidget_CommonSymbolIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapWidget_CommonSymbolIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapWidget_CommonSymbolIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MapWidget_CommonSymbolIcon.MapWidget_CommonSymbolIcon_C");
		return ptr;
	}

}


