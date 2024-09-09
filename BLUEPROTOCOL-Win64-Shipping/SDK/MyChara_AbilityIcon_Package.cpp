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
	 * 		Name   -> Function MyChara_AbilityIcon.MyChara_AbilityIcon_C.CreateTooltip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InNotUseTooltip                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyChara_AbilityIcon_C::CreateTooltip(bool InNotUseTooltip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyChara_AbilityIcon.MyChara_AbilityIcon_C.CreateTooltip");
		
		UMyChara_AbilityIcon_C_CreateTooltip_Params params {};
		params.InNotUseTooltip = InNotUseTooltip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyChara_AbilityIcon.MyChara_AbilityIcon_C.SetIconTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  InTexture                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyChara_AbilityIcon_C::SetIconTexture(class UTexture2D* InTexture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyChara_AbilityIcon.MyChara_AbilityIcon_C.SetIconTexture");
		
		UMyChara_AbilityIcon_C_SetIconTexture_Params params {};
		params.InTexture = InTexture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyChara_AbilityIcon.MyChara_AbilityIcon_C.SetAbility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InSkillId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InSkillLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBClassType                                       InClassType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InIsInformationHidden                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyChara_AbilityIcon_C::SetAbility(int32_t InSkillId, int32_t InSkillLevel, ESBClassType InClassType, bool InIsInformationHidden)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyChara_AbilityIcon.MyChara_AbilityIcon_C.SetAbility");
		
		UMyChara_AbilityIcon_C_SetAbility_Params params {};
		params.InSkillId = InSkillId;
		params.InSkillLevel = InSkillLevel;
		params.InClassType = InClassType;
		params.InIsInformationHidden = InIsInformationHidden;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyChara_AbilityIcon.MyChara_AbilityIcon_C.OnMouseEnter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UMyChara_AbilityIcon_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyChara_AbilityIcon.MyChara_AbilityIcon_C.OnMouseEnter");
		
		UMyChara_AbilityIcon_C_OnMouseEnter_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyChara_AbilityIcon.MyChara_AbilityIcon_C.ExecuteUbergraph_MyChara_AbilityIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyChara_AbilityIcon_C::ExecuteUbergraph_MyChara_AbilityIcon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyChara_AbilityIcon.MyChara_AbilityIcon_C.ExecuteUbergraph_MyChara_AbilityIcon");
		
		UMyChara_AbilityIcon_C_ExecuteUbergraph_MyChara_AbilityIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMyChara_AbilityIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMyChara_AbilityIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MyChara_AbilityIcon.MyChara_AbilityIcon_C");
		return ptr;
	}

}


