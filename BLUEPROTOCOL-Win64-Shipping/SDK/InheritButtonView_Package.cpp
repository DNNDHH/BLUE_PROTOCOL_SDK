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
	 * 		Name   -> Function InheritButtonView.InheritButtonView_C.SetTextMaxColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTextBlock*                                  Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsMax                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInheritButtonView_C::SetTextMaxColor(class UTextBlock* Text, bool IsMax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InheritButtonView.InheritButtonView_C.SetTextMaxColor");
		
		UInheritButtonView_C_SetTextMaxColor_Params params {};
		params.Text = Text;
		params.IsMax = IsMax;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InheritButtonView.InheritButtonView_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                SpecialPerk                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		TArray<struct FSBStackBPerk>                       SelectPerks                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FOwnItemInfo                                Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		TArray<struct FOwnItemInfo>                        Materials                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FOwnItemInfo                                SubAbilitiy                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UInheritButtonView_C::SetData(const struct FOwnItemInfo& SpecialPerk, TArray<struct FSBStackBPerk>* SelectPerks, const struct FOwnItemInfo& Target, TArray<struct FOwnItemInfo>* Materials, const struct FOwnItemInfo& SubAbilitiy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InheritButtonView.InheritButtonView_C.SetData");
		
		UInheritButtonView_C_SetData_Params params {};
		params.SpecialPerk = SpecialPerk;
		params.Target = Target;
		params.SubAbilitiy = SubAbilitiy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SelectPerks != nullptr)
			*SelectPerks = params.SelectPerks;
		if (Materials != nullptr)
			*Materials = params.Materials;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InheritButtonView.InheritButtonView_C.Initialize
	 * 		Flags  -> ()
	 */
	void UInheritButtonView_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InheritButtonView.InheritButtonView_C.Initialize");
		
		UInheritButtonView_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InheritButtonView.InheritButtonView_C.UpdateVitalPerkName
	 * 		Flags  -> ()
	 */
	void UInheritButtonView_C::UpdateVitalPerkName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InheritButtonView.InheritButtonView_C.UpdateVitalPerkName");
		
		UInheritButtonView_C_UpdateVitalPerkName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InheritButtonView.InheritButtonView_C.UpdateSlot
	 * 		Flags  -> ()
	 */
	void UInheritButtonView_C::UpdateSlot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InheritButtonView.InheritButtonView_C.UpdateSlot");
		
		UInheritButtonView_C_UpdateSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InheritButtonView.InheritButtonView_C.Construct
	 * 		Flags  -> ()
	 */
	void UInheritButtonView_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InheritButtonView.InheritButtonView_C.Construct");
		
		UInheritButtonView_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InheritButtonView.InheritButtonView_C.BndEvt__InheritButtonView_BtnReselect_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UInheritButtonView_C::BndEvt__InheritButtonView_BtnReselect_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InheritButtonView.InheritButtonView_C.BndEvt__InheritButtonView_BtnReselect_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature");
		
		UInheritButtonView_C_BndEvt__InheritButtonView_BtnReselect_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InheritButtonView.InheritButtonView_C.ExecuteUbergraph_InheritButtonView
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInheritButtonView_C::ExecuteUbergraph_InheritButtonView(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InheritButtonView.InheritButtonView_C.ExecuteUbergraph_InheritButtonView");
		
		UInheritButtonView_C_ExecuteUbergraph_InheritButtonView_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InheritButtonView.InheritButtonView_C.SelectReselect__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UInheritButtonView_C::SelectReselect__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InheritButtonView.InheritButtonView_C.SelectReselect__DelegateSignature");
		
		UInheritButtonView_C_SelectReselect__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInheritButtonView_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInheritButtonView_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass InheritButtonView.InheritButtonView_C");
		return ptr;
	}

}


