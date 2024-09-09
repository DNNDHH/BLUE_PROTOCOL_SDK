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
	 * 		Name   -> Function MyCharaMenu_TacticalSkillLargeIcon.MyCharaMenu_TacticalSkillLargeIcon_C.SetIsHoverEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsEnabled                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_TacticalSkillLargeIcon_C::SetIsHoverEnabled(bool InIsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_TacticalSkillLargeIcon.MyCharaMenu_TacticalSkillLargeIcon_C.SetIsHoverEnabled");
		
		UMyCharaMenu_TacticalSkillLargeIcon_C_SetIsHoverEnabled_Params params {};
		params.InIsEnabled = InIsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_TacticalSkillLargeIcon.MyCharaMenu_TacticalSkillLargeIcon_C.SetIsIconEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsEnabled                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_TacticalSkillLargeIcon_C::SetIsIconEnabled(bool InIsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_TacticalSkillLargeIcon.MyCharaMenu_TacticalSkillLargeIcon_C.SetIsIconEnabled");
		
		UMyCharaMenu_TacticalSkillLargeIcon_C_SetIsIconEnabled_Params params {};
		params.InIsEnabled = InIsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_TacticalSkillLargeIcon.MyCharaMenu_TacticalSkillLargeIcon_C.SetIconTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  InTexture                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_TacticalSkillLargeIcon_C::SetIconTexture(class UTexture2D* InTexture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_TacticalSkillLargeIcon.MyCharaMenu_TacticalSkillLargeIcon_C.SetIconTexture");
		
		UMyCharaMenu_TacticalSkillLargeIcon_C_SetIconTexture_Params params {};
		params.InTexture = InTexture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_TacticalSkillLargeIcon.MyCharaMenu_TacticalSkillLargeIcon_C.CreateTooltip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InNotUseTooltip                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_TacticalSkillLargeIcon_C::CreateTooltip(bool InNotUseTooltip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_TacticalSkillLargeIcon.MyCharaMenu_TacticalSkillLargeIcon_C.CreateTooltip");
		
		UMyCharaMenu_TacticalSkillLargeIcon_C_CreateTooltip_Params params {};
		params.InNotUseTooltip = InNotUseTooltip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_TacticalSkillLargeIcon.MyCharaMenu_TacticalSkillLargeIcon_C.SetSkill
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InSkillId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InSkillLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InIsInformationHidden                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_TacticalSkillLargeIcon_C::SetSkill(int32_t InSkillId, int32_t InSkillLevel, bool InIsInformationHidden)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_TacticalSkillLargeIcon.MyCharaMenu_TacticalSkillLargeIcon_C.SetSkill");
		
		UMyCharaMenu_TacticalSkillLargeIcon_C_SetSkill_Params params {};
		params.InSkillId = InSkillId;
		params.InSkillLevel = InSkillLevel;
		params.InIsInformationHidden = InIsInformationHidden;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_TacticalSkillLargeIcon.MyCharaMenu_TacticalSkillLargeIcon_C.OnMouseEnter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UMyCharaMenu_TacticalSkillLargeIcon_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_TacticalSkillLargeIcon.MyCharaMenu_TacticalSkillLargeIcon_C.OnMouseEnter");
		
		UMyCharaMenu_TacticalSkillLargeIcon_C_OnMouseEnter_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_TacticalSkillLargeIcon.MyCharaMenu_TacticalSkillLargeIcon_C.ExecuteUbergraph_MyCharaMenu_TacticalSkillLargeIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_TacticalSkillLargeIcon_C::ExecuteUbergraph_MyCharaMenu_TacticalSkillLargeIcon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_TacticalSkillLargeIcon.MyCharaMenu_TacticalSkillLargeIcon_C.ExecuteUbergraph_MyCharaMenu_TacticalSkillLargeIcon");
		
		UMyCharaMenu_TacticalSkillLargeIcon_C_ExecuteUbergraph_MyCharaMenu_TacticalSkillLargeIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMyCharaMenu_TacticalSkillLargeIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMyCharaMenu_TacticalSkillLargeIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MyCharaMenu_TacticalSkillLargeIcon.MyCharaMenu_TacticalSkillLargeIcon_C");
		return ptr;
	}

}


