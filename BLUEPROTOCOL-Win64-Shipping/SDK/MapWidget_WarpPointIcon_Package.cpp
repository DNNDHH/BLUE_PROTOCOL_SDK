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
	 * 		Name   -> Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.ChangeTooltipText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InToolTipText                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UMapWidget_WarpPointIcon_C::ChangeTooltipText(const class FString& InToolTipText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.ChangeTooltipText");
		
		UMapWidget_WarpPointIcon_C_ChangeTooltipText_Params params {};
		params.InToolTipText = InToolTipText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.SetDungeonMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InDungeonMode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMapWidget_WarpPointIcon_C::SetDungeonMode(bool InDungeonMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.SetDungeonMode");
		
		UMapWidget_WarpPointIcon_C_SetDungeonMode_Params params {};
		params.InDungeonMode = InDungeonMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.SetWarpPointEx
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterWarpPoint                          InWarpPointData                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               IsCity                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMapWidget_WarpPointIcon_C::SetWarpPointEx(const struct FSBMasterWarpPoint& InWarpPointData, bool IsCity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.SetWarpPointEx");
		
		UMapWidget_WarpPointIcon_C_SetWarpPointEx_Params params {};
		params.InWarpPointData = InWarpPointData;
		params.IsCity = IsCity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.SetIconImageEx
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsLocalWarpIcon                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsHovered                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMapWidget_WarpPointIcon_C::SetIconImageEx(bool IsLocalWarpIcon, bool IsHovered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.SetIconImageEx");
		
		UMapWidget_WarpPointIcon_C_SetIconImageEx_Params params {};
		params.IsLocalWarpIcon = IsLocalWarpIcon;
		params.IsHovered = IsHovered;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.SetGrayOut
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsGrayOut                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMapWidget_WarpPointIcon_C::SetGrayOut(bool IsGrayOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.SetGrayOut");
		
		UMapWidget_WarpPointIcon_C_SetGrayOut_Params params {};
		params.IsGrayOut = IsGrayOut;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.SetHoveredSoundId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESystemSE                                          InSoundId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_WarpPointIcon_C::SetHoveredSoundId(ESystemSE InSoundId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.SetHoveredSoundId");
		
		UMapWidget_WarpPointIcon_C_SetHoveredSoundId_Params params {};
		params.InSoundId = InSoundId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.SetPressedSoundId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESystemSE                                          InSoundId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_WarpPointIcon_C::SetPressedSoundId(ESystemSE InSoundId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.SetPressedSoundId");
		
		UMapWidget_WarpPointIcon_C_SetPressedSoundId_Params params {};
		params.InSoundId = InSoundId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.SetIconNormalTintColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                InColor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_WarpPointIcon_C::SetIconNormalTintColor(const struct FLinearColor& InColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.SetIconNormalTintColor");
		
		UMapWidget_WarpPointIcon_C_SetIconNormalTintColor_Params params {};
		params.InColor = InColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.GetToolTipWidget_1
	 * 		Flags  -> ()
	 */
	class UWidget* UMapWidget_WarpPointIcon_C::GetToolTipWidget_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.GetToolTipWidget_1");
		
		UMapWidget_WarpPointIcon_C_GetToolTipWidget_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.SetButtonPressEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEnable                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMapWidget_WarpPointIcon_C::SetButtonPressEnable(bool IsEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.SetButtonPressEnable");
		
		UMapWidget_WarpPointIcon_C_SetButtonPressEnable_Params params {};
		params.IsEnable = IsEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.SetIconImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsLocalWarpIcon                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsHovered                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMapWidget_WarpPointIcon_C::SetIconImage(bool IsLocalWarpIcon, bool IsHovered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.SetIconImage");
		
		UMapWidget_WarpPointIcon_C_SetIconImage_Params params {};
		params.IsLocalWarpIcon = IsLocalWarpIcon;
		params.IsHovered = IsHovered;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.SetActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsActive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMapWidget_WarpPointIcon_C::SetActive(bool IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.SetActive");
		
		UMapWidget_WarpPointIcon_C_SetActive_Params params {};
		params.IsActive = IsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.SetWarpPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterWarpPoint                          InWarpPointData                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               IsCity                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMapWidget_WarpPointIcon_C::SetWarpPoint(const struct FSBMasterWarpPoint& InWarpPointData, bool IsCity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.SetWarpPoint");
		
		UMapWidget_WarpPointIcon_C_SetWarpPoint_Params params {};
		params.InWarpPointData = InWarpPointData;
		params.IsCity = IsCity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.BndEvt__Button_WarpPoint_K2Node_ComponentBoundEvent_179_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMapWidget_WarpPointIcon_C::BndEvt__Button_WarpPoint_K2Node_ComponentBoundEvent_179_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.BndEvt__Button_WarpPoint_K2Node_ComponentBoundEvent_179_OnButtonClickedEvent__DelegateSignature");
		
		UMapWidget_WarpPointIcon_C_BndEvt__Button_WarpPoint_K2Node_ComponentBoundEvent_179_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.BndEvt__Button_WarpPoint_K2Node_ComponentBoundEvent_213_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMapWidget_WarpPointIcon_C::BndEvt__Button_WarpPoint_K2Node_ComponentBoundEvent_213_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.BndEvt__Button_WarpPoint_K2Node_ComponentBoundEvent_213_OnButtonHoverEvent__DelegateSignature");
		
		UMapWidget_WarpPointIcon_C_BndEvt__Button_WarpPoint_K2Node_ComponentBoundEvent_213_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.BndEvt__Button_WarpPoint_K2Node_ComponentBoundEvent_239_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMapWidget_WarpPointIcon_C::BndEvt__Button_WarpPoint_K2Node_ComponentBoundEvent_239_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.BndEvt__Button_WarpPoint_K2Node_ComponentBoundEvent_239_OnButtonHoverEvent__DelegateSignature");
		
		UMapWidget_WarpPointIcon_C_BndEvt__Button_WarpPoint_K2Node_ComponentBoundEvent_239_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.ExecuteUbergraph_MapWidget_WarpPointIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_WarpPointIcon_C::ExecuteUbergraph_MapWidget_WarpPointIcon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.ExecuteUbergraph_MapWidget_WarpPointIcon");
		
		UMapWidget_WarpPointIcon_C_ExecuteUbergraph_MapWidget_WarpPointIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.OnPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMapWidget_WarpPointIcon_C*                  InWarpPointIcon                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_WarpPointIcon_C::OnPressed__DelegateSignature(class UMapWidget_WarpPointIcon_C* InWarpPointIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.OnPressed__DelegateSignature");
		
		UMapWidget_WarpPointIcon_C_OnPressed__DelegateSignature_Params params {};
		params.InWarpPointIcon = InWarpPointIcon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapWidget_WarpPointIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapWidget_WarpPointIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C");
		return ptr;
	}

}


