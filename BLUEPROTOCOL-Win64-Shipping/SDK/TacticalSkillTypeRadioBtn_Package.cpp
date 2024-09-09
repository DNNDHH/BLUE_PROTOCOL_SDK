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
	 * 		Name   -> Function TacticalSkillTypeRadioBtn.TacticalSkillTypeRadioBtn_C.GetSkillTypeId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            OutSkillTypeId                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTacticalSkillTypeRadioBtn_C::GetSkillTypeId(int32_t* OutSkillTypeId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TacticalSkillTypeRadioBtn.TacticalSkillTypeRadioBtn_C.GetSkillTypeId");
		
		UTacticalSkillTypeRadioBtn_C_GetSkillTypeId_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSkillTypeId != nullptr)
			*OutSkillTypeId = params.OutSkillTypeId;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TacticalSkillTypeRadioBtn.TacticalSkillTypeRadioBtn_C.SetRadioBtnVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsVisible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTacticalSkillTypeRadioBtn_C::SetRadioBtnVisibility(bool InIsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TacticalSkillTypeRadioBtn.TacticalSkillTypeRadioBtn_C.SetRadioBtnVisibility");
		
		UTacticalSkillTypeRadioBtn_C_SetRadioBtnVisibility_Params params {};
		params.InIsVisible = InIsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TacticalSkillTypeRadioBtn.TacticalSkillTypeRadioBtn_C.IsRedioBtnSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OutIsSelected                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTacticalSkillTypeRadioBtn_C::IsRedioBtnSelected(bool* OutIsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TacticalSkillTypeRadioBtn.TacticalSkillTypeRadioBtn_C.IsRedioBtnSelected");
		
		UTacticalSkillTypeRadioBtn_C_IsRedioBtnSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsSelected != nullptr)
			*OutIsSelected = params.OutIsSelected;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TacticalSkillTypeRadioBtn.TacticalSkillTypeRadioBtn_C.SetRadioBtnSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsSelected                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTacticalSkillTypeRadioBtn_C::SetRadioBtnSelected(bool InIsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TacticalSkillTypeRadioBtn.TacticalSkillTypeRadioBtn_C.SetRadioBtnSelected");
		
		UTacticalSkillTypeRadioBtn_C_SetRadioBtnSelected_Params params {};
		params.InIsSelected = InIsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TacticalSkillTypeRadioBtn.TacticalSkillTypeRadioBtn_C.SetEquipped
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsEquipped                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTacticalSkillTypeRadioBtn_C::SetEquipped(bool InIsEquipped)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TacticalSkillTypeRadioBtn.TacticalSkillTypeRadioBtn_C.SetEquipped");
		
		UTacticalSkillTypeRadioBtn_C_SetEquipped_Params params {};
		params.InIsEquipped = InIsEquipped;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TacticalSkillTypeRadioBtn.TacticalSkillTypeRadioBtn_C.SetSelectMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsSelectMode                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTacticalSkillTypeRadioBtn_C::SetSelectMode(bool InIsSelectMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TacticalSkillTypeRadioBtn.TacticalSkillTypeRadioBtn_C.SetSelectMode");
		
		UTacticalSkillTypeRadioBtn_C_SetSelectMode_Params params {};
		params.InIsSelectMode = InIsSelectMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TacticalSkillTypeRadioBtn.TacticalSkillTypeRadioBtn_C.SetSkillType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InSkillTypeId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTacticalSkillTypeRadioBtn_C::SetSkillType(int32_t InSkillTypeId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TacticalSkillTypeRadioBtn.TacticalSkillTypeRadioBtn_C.SetSkillType");
		
		UTacticalSkillTypeRadioBtn_C_SetSkillType_Params params {};
		params.InSkillTypeId = InSkillTypeId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TacticalSkillTypeRadioBtn.TacticalSkillTypeRadioBtn_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTacticalSkillTypeRadioBtn_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TacticalSkillTypeRadioBtn.TacticalSkillTypeRadioBtn_C.PreConstruct");
		
		UTacticalSkillTypeRadioBtn_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TacticalSkillTypeRadioBtn.TacticalSkillTypeRadioBtn_C.BndEvt__TacticalSkillTypeRadioButton_RadioBtn_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTacticalSkillTypeRadioBtn_C::BndEvt__TacticalSkillTypeRadioButton_RadioBtn_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TacticalSkillTypeRadioBtn.TacticalSkillTypeRadioBtn_C.BndEvt__TacticalSkillTypeRadioButton_RadioBtn_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UTacticalSkillTypeRadioBtn_C_BndEvt__TacticalSkillTypeRadioButton_RadioBtn_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TacticalSkillTypeRadioBtn.TacticalSkillTypeRadioBtn_C.ExecuteUbergraph_TacticalSkillTypeRadioBtn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTacticalSkillTypeRadioBtn_C::ExecuteUbergraph_TacticalSkillTypeRadioBtn(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TacticalSkillTypeRadioBtn.TacticalSkillTypeRadioBtn_C.ExecuteUbergraph_TacticalSkillTypeRadioBtn");
		
		UTacticalSkillTypeRadioBtn_C_ExecuteUbergraph_TacticalSkillTypeRadioBtn_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TacticalSkillTypeRadioBtn.TacticalSkillTypeRadioBtn_C.OnRadioBtnSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InSkillTypeId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTacticalSkillTypeRadioBtn_C::OnRadioBtnSelected__DelegateSignature(int32_t InSkillTypeId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TacticalSkillTypeRadioBtn.TacticalSkillTypeRadioBtn_C.OnRadioBtnSelected__DelegateSignature");
		
		UTacticalSkillTypeRadioBtn_C_OnRadioBtnSelected__DelegateSignature_Params params {};
		params.InSkillTypeId = InSkillTypeId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTacticalSkillTypeRadioBtn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTacticalSkillTypeRadioBtn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TacticalSkillTypeRadioBtn.TacticalSkillTypeRadioBtn_C");
		return ptr;
	}

}


