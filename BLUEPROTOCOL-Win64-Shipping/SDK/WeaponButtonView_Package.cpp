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
	 * 		Name   -> Function WeaponButtonView.WeaponButtonView_C.SetTextMaxColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTextBlock*                                  Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               BMax                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWeaponButtonView_C::SetTextMaxColor(class UTextBlock* Text, bool BMax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponButtonView.WeaponButtonView_C.SetTextMaxColor");
		
		UWeaponButtonView_C_SetTextMaxColor_Params params {};
		params.Text = Text;
		params.BMax = BMax;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponButtonView.WeaponButtonView_C.SetAbility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                OwnItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWeaponButtonView_C::SetAbility(const struct FOwnItemInfo& OwnItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponButtonView.WeaponButtonView_C.SetAbility");
		
		UWeaponButtonView_C_SetAbility_Params params {};
		params.OwnItem = OwnItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponButtonView.WeaponButtonView_C.ApplyWeaponStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                WeaponData                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWeaponButtonView_C::ApplyWeaponStatus(const struct FOwnItemInfo& WeaponData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponButtonView.WeaponButtonView_C.ApplyWeaponStatus");
		
		UWeaponButtonView_C_ApplyWeaponStatus_Params params {};
		params.WeaponData = WeaponData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponButtonView.WeaponButtonView_C.ApplySelectWeapon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                OwnItemInfo                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWeaponButtonView_C::ApplySelectWeapon(const struct FOwnItemInfo& OwnItemInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponButtonView.WeaponButtonView_C.ApplySelectWeapon");
		
		UWeaponButtonView_C_ApplySelectWeapon_Params params {};
		params.OwnItemInfo = OwnItemInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponButtonView.WeaponButtonView_C.OnLoaded_3A96932F4BF4231E1AB840A7261D0FEA
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponButtonView_C::OnLoaded_3A96932F4BF4231E1AB840A7261D0FEA(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponButtonView.WeaponButtonView_C.OnLoaded_3A96932F4BF4231E1AB840A7261D0FEA");
		
		UWeaponButtonView_C_OnLoaded_3A96932F4BF4231E1AB840A7261D0FEA_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponButtonView.WeaponButtonView_C.RequestLoadImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                OwnItemInfo                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWeaponButtonView_C::RequestLoadImage(const struct FOwnItemInfo& OwnItemInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponButtonView.WeaponButtonView_C.RequestLoadImage");
		
		UWeaponButtonView_C_RequestLoadImage_Params params {};
		params.OwnItemInfo = OwnItemInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponButtonView.WeaponButtonView_C.BndEvt__WeaponButtonView_BtnReselect_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWeaponButtonView_C::BndEvt__WeaponButtonView_BtnReselect_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponButtonView.WeaponButtonView_C.BndEvt__WeaponButtonView_BtnReselect_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature");
		
		UWeaponButtonView_C_BndEvt__WeaponButtonView_BtnReselect_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponButtonView.WeaponButtonView_C.ExecuteUbergraph_WeaponButtonView
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponButtonView_C::ExecuteUbergraph_WeaponButtonView(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponButtonView.WeaponButtonView_C.ExecuteUbergraph_WeaponButtonView");
		
		UWeaponButtonView_C_ExecuteUbergraph_WeaponButtonView_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponButtonView.WeaponButtonView_C.OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWeaponButtonView_C::OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponButtonView.WeaponButtonView_C.OnClicked__DelegateSignature");
		
		UWeaponButtonView_C_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeaponButtonView_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponButtonView_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WeaponButtonView.WeaponButtonView_C");
		return ptr;
	}

}


