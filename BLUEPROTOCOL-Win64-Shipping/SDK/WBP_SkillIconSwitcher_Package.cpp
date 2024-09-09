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
	 * 		Name   -> Function WBP_SkillIconSwitcher.WBP_SkillIconSwitcher_C.GetToolTipWidget_1
	 * 		Flags  -> ()
	 */
	class UWidget* UWBP_SkillIconSwitcher_C::GetToolTipWidget_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillIconSwitcher.WBP_SkillIconSwitcher_C.GetToolTipWidget_1");
		
		UWBP_SkillIconSwitcher_C_GetToolTipWidget_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SkillIconSwitcher.WBP_SkillIconSwitcher_C.Set Equipment Icon Visible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_SkillIconSwitcher_C::SetEquipmentIconVisible(bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillIconSwitcher.WBP_SkillIconSwitcher_C.Set Equipment Icon Visible");
		
		UWBP_SkillIconSwitcher_C_SetEquipmentIconVisible_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SkillIconSwitcher.WBP_SkillIconSwitcher_C.Update
	 * 		Flags  -> ()
	 */
	void UWBP_SkillIconSwitcher_C::Update()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillIconSwitcher.WBP_SkillIconSwitcher_C.Update");
		
		UWBP_SkillIconSwitcher_C_Update_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SkillIconSwitcher.WBP_SkillIconSwitcher_C.Init
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SkillId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SkillLevel                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESkillTreeAbilityType                              AbilityType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_SkillIconSwitcher_C::Init(int32_t SkillId, int32_t SkillLevel, ESkillTreeAbilityType AbilityType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillIconSwitcher.WBP_SkillIconSwitcher_C.Init");
		
		UWBP_SkillIconSwitcher_C_Init_Params params {};
		params.SkillId = SkillId;
		params.SkillLevel = SkillLevel;
		params.AbilityType = AbilityType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SkillIconSwitcher.WBP_SkillIconSwitcher_C.Destruct
	 * 		Flags  -> ()
	 */
	void UWBP_SkillIconSwitcher_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillIconSwitcher.WBP_SkillIconSwitcher_C.Destruct");
		
		UWBP_SkillIconSwitcher_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SkillIconSwitcher.WBP_SkillIconSwitcher_C.BndEvt__WBP_SkillIconSwitcher_SBButton_C_40_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_SkillIconSwitcher_C::BndEvt__WBP_SkillIconSwitcher_SBButton_C_40_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillIconSwitcher.WBP_SkillIconSwitcher_C.BndEvt__WBP_SkillIconSwitcher_SBButton_C_40_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_SkillIconSwitcher_C_BndEvt__WBP_SkillIconSwitcher_SBButton_C_40_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SkillIconSwitcher.WBP_SkillIconSwitcher_C.BndEvt__WBP_SkillIconSwitcher_SBButton_C_40_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_SkillIconSwitcher_C::BndEvt__WBP_SkillIconSwitcher_SBButton_C_40_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillIconSwitcher.WBP_SkillIconSwitcher_C.BndEvt__WBP_SkillIconSwitcher_SBButton_C_40_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature");
		
		UWBP_SkillIconSwitcher_C_BndEvt__WBP_SkillIconSwitcher_SBButton_C_40_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SkillIconSwitcher.WBP_SkillIconSwitcher_C.BndEvt__WBP_SkillIconSwitcher_SBButton_C_40_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_SkillIconSwitcher_C::BndEvt__WBP_SkillIconSwitcher_SBButton_C_40_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillIconSwitcher.WBP_SkillIconSwitcher_C.BndEvt__WBP_SkillIconSwitcher_SBButton_C_40_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature");
		
		UWBP_SkillIconSwitcher_C_BndEvt__WBP_SkillIconSwitcher_SBButton_C_40_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SkillIconSwitcher.WBP_SkillIconSwitcher_C.ExecuteUbergraph_WBP_SkillIconSwitcher
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_SkillIconSwitcher_C::ExecuteUbergraph_WBP_SkillIconSwitcher(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillIconSwitcher.WBP_SkillIconSwitcher_C.ExecuteUbergraph_WBP_SkillIconSwitcher");
		
		UWBP_SkillIconSwitcher_C_ExecuteUbergraph_WBP_SkillIconSwitcher_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SkillIconSwitcher.WBP_SkillIconSwitcher_C.OnClick__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SkillId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SkillLV                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_SkillIconSwitcher_C::OnClick__DelegateSignature(int32_t SkillId, int32_t SkillLV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillIconSwitcher.WBP_SkillIconSwitcher_C.OnClick__DelegateSignature");
		
		UWBP_SkillIconSwitcher_C_OnClick__DelegateSignature_Params params {};
		params.SkillId = SkillId;
		params.SkillLV = SkillLV;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SkillIconSwitcher.WBP_SkillIconSwitcher_C.OnUnhovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_SkillIconSwitcher_C::OnUnhovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillIconSwitcher.WBP_SkillIconSwitcher_C.OnUnhovered__DelegateSignature");
		
		UWBP_SkillIconSwitcher_C_OnUnhovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SkillIconSwitcher.WBP_SkillIconSwitcher_C.OnHovered__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_SkillIconSwitcher_C::OnHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SkillIconSwitcher.WBP_SkillIconSwitcher_C.OnHovered__DelegateSignature");
		
		UWBP_SkillIconSwitcher_C_OnHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_SkillIconSwitcher_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_SkillIconSwitcher_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_SkillIconSwitcher.WBP_SkillIconSwitcher_C");
		return ptr;
	}

}


