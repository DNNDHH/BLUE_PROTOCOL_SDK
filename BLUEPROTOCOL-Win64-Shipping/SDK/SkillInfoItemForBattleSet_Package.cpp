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
	 * 		Name   -> Function SkillInfoItemForBattleSet.SkillInfoItemForBattleSet_C.GetSkillClassType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBClassType                                       OutSkillClassType                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillInfoItemForBattleSet_C::GetSkillClassType(ESBClassType* OutSkillClassType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoItemForBattleSet.SkillInfoItemForBattleSet_C.GetSkillClassType");
		
		USkillInfoItemForBattleSet_C_GetSkillClassType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSkillClassType != nullptr)
			*OutSkillClassType = params.OutSkillClassType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoItemForBattleSet.SkillInfoItemForBattleSet_C.GetSkillID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            OutSkillId                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillInfoItemForBattleSet_C::GetSkillID(int32_t* OutSkillId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoItemForBattleSet.SkillInfoItemForBattleSet_C.GetSkillID");
		
		USkillInfoItemForBattleSet_C_GetSkillID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSkillId != nullptr)
			*OutSkillId = params.OutSkillId;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoItemForBattleSet.SkillInfoItemForBattleSet_C.SetInfoItemSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsSelected                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfoItemForBattleSet_C::SetInfoItemSelected(bool InIsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoItemForBattleSet.SkillInfoItemForBattleSet_C.SetInfoItemSelected");
		
		USkillInfoItemForBattleSet_C_SetInfoItemSelected_Params params {};
		params.InIsSelected = InIsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoItemForBattleSet.SkillInfoItemForBattleSet_C.CreateTooltip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InNotUseTooltip                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            InSkillId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InSkillLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillInfoItemForBattleSet_C::CreateTooltip(bool InNotUseTooltip, int32_t InSkillId, int32_t InSkillLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoItemForBattleSet.SkillInfoItemForBattleSet_C.CreateTooltip");
		
		USkillInfoItemForBattleSet_C_CreateTooltip_Params params {};
		params.InNotUseTooltip = InNotUseTooltip;
		params.InSkillId = InSkillId;
		params.InSkillLevel = InSkillLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoItemForBattleSet.SkillInfoItemForBattleSet_C.SetSkillName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InSkillName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            InSkillLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillInfoItemForBattleSet_C::SetSkillName(const class FString& InSkillName, int32_t InSkillLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoItemForBattleSet.SkillInfoItemForBattleSet_C.SetSkillName");
		
		USkillInfoItemForBattleSet_C_SetSkillName_Params params {};
		params.InSkillName = InSkillName;
		params.InSkillLevel = InSkillLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoItemForBattleSet.SkillInfoItemForBattleSet_C.SetSkillIconEquippedMarkVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsVisible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfoItemForBattleSet_C::SetSkillIconEquippedMarkVisibility(bool InIsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoItemForBattleSet.SkillInfoItemForBattleSet_C.SetSkillIconEquippedMarkVisibility");
		
		USkillInfoItemForBattleSet_C_SetSkillIconEquippedMarkVisibility_Params params {};
		params.InIsVisible = InIsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoItemForBattleSet.SkillInfoItemForBattleSet_C.SetSkill
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InSkillId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBClassType                                       InSkillClassType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InIsClassAbility                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfoItemForBattleSet_C::SetSkill(int32_t InSkillId, ESBClassType InSkillClassType, bool InIsClassAbility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoItemForBattleSet.SkillInfoItemForBattleSet_C.SetSkill");
		
		USkillInfoItemForBattleSet_C_SetSkill_Params params {};
		params.InSkillId = InSkillId;
		params.InSkillClassType = InSkillClassType;
		params.InIsClassAbility = InIsClassAbility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoItemForBattleSet.SkillInfoItemForBattleSet_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillInfoItemForBattleSet_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoItemForBattleSet.SkillInfoItemForBattleSet_C.PreConstruct");
		
		USkillInfoItemForBattleSet_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoItemForBattleSet.SkillInfoItemForBattleSet_C.BndEvt__BtnListItem_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USkillInfoItemForBattleSet_C::BndEvt__BtnListItem_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoItemForBattleSet.SkillInfoItemForBattleSet_C.BndEvt__BtnListItem_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		USkillInfoItemForBattleSet_C_BndEvt__BtnListItem_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoItemForBattleSet.SkillInfoItemForBattleSet_C.BndEvt__SkillInfoItemForBattleSet_Btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USkillInfoItemForBattleSet_C::BndEvt__SkillInfoItemForBattleSet_Btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoItemForBattleSet.SkillInfoItemForBattleSet_C.BndEvt__SkillInfoItemForBattleSet_Btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		USkillInfoItemForBattleSet_C_BndEvt__SkillInfoItemForBattleSet_Btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoItemForBattleSet.SkillInfoItemForBattleSet_C.BndEvt__SkillInfoItemForBattleSet_Btn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USkillInfoItemForBattleSet_C::BndEvt__SkillInfoItemForBattleSet_Btn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoItemForBattleSet.SkillInfoItemForBattleSet_C.BndEvt__SkillInfoItemForBattleSet_Btn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		USkillInfoItemForBattleSet_C_BndEvt__SkillInfoItemForBattleSet_Btn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoItemForBattleSet.SkillInfoItemForBattleSet_C.ExecuteUbergraph_SkillInfoItemForBattleSet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillInfoItemForBattleSet_C::ExecuteUbergraph_SkillInfoItemForBattleSet(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoItemForBattleSet.SkillInfoItemForBattleSet_C.ExecuteUbergraph_SkillInfoItemForBattleSet");
		
		USkillInfoItemForBattleSet_C_ExecuteUbergraph_SkillInfoItemForBattleSet_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoItemForBattleSet.SkillInfoItemForBattleSet_C.OnSkillInfoItemPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkillInfoItemForBattleSet_C*                InInfoItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillInfoItemForBattleSet_C::OnSkillInfoItemPressed__DelegateSignature(class USkillInfoItemForBattleSet_C* InInfoItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoItemForBattleSet.SkillInfoItemForBattleSet_C.OnSkillInfoItemPressed__DelegateSignature");
		
		USkillInfoItemForBattleSet_C_OnSkillInfoItemPressed__DelegateSignature_Params params {};
		params.InInfoItem = InInfoItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USkillInfoItemForBattleSet_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USkillInfoItemForBattleSet_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SkillInfoItemForBattleSet.SkillInfoItemForBattleSet_C");
		return ptr;
	}

}


