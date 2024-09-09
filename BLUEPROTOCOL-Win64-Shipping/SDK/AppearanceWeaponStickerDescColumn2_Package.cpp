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
	 * 		Name   -> Function AppearanceWeaponStickerDescColumn2.AppearanceWeaponStickerDescColumn2_C.GetStickerUse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OutIsStickerUse                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAppearanceWeaponStickerDescColumn2_C::GetStickerUse(bool* OutIsStickerUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AppearanceWeaponStickerDescColumn2.AppearanceWeaponStickerDescColumn2_C.GetStickerUse");
		
		UAppearanceWeaponStickerDescColumn2_C_GetStickerUse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsStickerUse != nullptr)
			*OutIsStickerUse = params.OutIsStickerUse;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AppearanceWeaponStickerDescColumn2.AppearanceWeaponStickerDescColumn2_C.SetStickerBtn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bOn                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAppearanceWeaponStickerDescColumn2_C::SetStickerBtn(bool bOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AppearanceWeaponStickerDescColumn2.AppearanceWeaponStickerDescColumn2_C.SetStickerBtn");
		
		UAppearanceWeaponStickerDescColumn2_C_SetStickerBtn_Params params {};
		params.bOn = bOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AppearanceWeaponStickerDescColumn2.AppearanceWeaponStickerDescColumn2_C.SetIsStickerIndefinite
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsIndefinite                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAppearanceWeaponStickerDescColumn2_C::SetIsStickerIndefinite(bool InIsIndefinite)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AppearanceWeaponStickerDescColumn2.AppearanceWeaponStickerDescColumn2_C.SetIsStickerIndefinite");
		
		UAppearanceWeaponStickerDescColumn2_C_SetIsStickerIndefinite_Params params {};
		params.InIsIndefinite = InIsIndefinite;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AppearanceWeaponStickerDescColumn2.AppearanceWeaponStickerDescColumn2_C.SetWeaponStickerDesc
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBWeaponItemData                           InWeaponData                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAppearanceWeaponStickerDescColumn2_C::SetWeaponStickerDesc(const struct FSBWeaponItemData& InWeaponData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AppearanceWeaponStickerDescColumn2.AppearanceWeaponStickerDescColumn2_C.SetWeaponStickerDesc");
		
		UAppearanceWeaponStickerDescColumn2_C_SetWeaponStickerDesc_Params params {};
		params.InWeaponData = InWeaponData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AppearanceWeaponStickerDescColumn2.AppearanceWeaponStickerDescColumn2_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAppearanceWeaponStickerDescColumn2_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AppearanceWeaponStickerDescColumn2.AppearanceWeaponStickerDescColumn2_C.PreConstruct");
		
		UAppearanceWeaponStickerDescColumn2_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AppearanceWeaponStickerDescColumn2.AppearanceWeaponStickerDescColumn2_C.BndEvt__AppearanceWeaponStickerDescColumn2_WeaponStickerInUseBtn_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UAppearanceWeaponStickerDescColumn2_C::BndEvt__AppearanceWeaponStickerDescColumn2_WeaponStickerInUseBtn_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AppearanceWeaponStickerDescColumn2.AppearanceWeaponStickerDescColumn2_C.BndEvt__AppearanceWeaponStickerDescColumn2_WeaponStickerInUseBtn_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature");
		
		UAppearanceWeaponStickerDescColumn2_C_BndEvt__AppearanceWeaponStickerDescColumn2_WeaponStickerInUseBtn_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AppearanceWeaponStickerDescColumn2.AppearanceWeaponStickerDescColumn2_C.BndEvt__AppearanceWeaponStickerDescColumn2_WeaponStickerRemoveBtn_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UAppearanceWeaponStickerDescColumn2_C::BndEvt__AppearanceWeaponStickerDescColumn2_WeaponStickerRemoveBtn_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AppearanceWeaponStickerDescColumn2.AppearanceWeaponStickerDescColumn2_C.BndEvt__AppearanceWeaponStickerDescColumn2_WeaponStickerRemoveBtn_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature");
		
		UAppearanceWeaponStickerDescColumn2_C_BndEvt__AppearanceWeaponStickerDescColumn2_WeaponStickerRemoveBtn_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AppearanceWeaponStickerDescColumn2.AppearanceWeaponStickerDescColumn2_C.ExecuteUbergraph_AppearanceWeaponStickerDescColumn2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAppearanceWeaponStickerDescColumn2_C::ExecuteUbergraph_AppearanceWeaponStickerDescColumn2(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AppearanceWeaponStickerDescColumn2.AppearanceWeaponStickerDescColumn2_C.ExecuteUbergraph_AppearanceWeaponStickerDescColumn2");
		
		UAppearanceWeaponStickerDescColumn2_C_ExecuteUbergraph_AppearanceWeaponStickerDescColumn2_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAppearanceWeaponStickerDescColumn2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAppearanceWeaponStickerDescColumn2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AppearanceWeaponStickerDescColumn2.AppearanceWeaponStickerDescColumn2_C");
		return ptr;
	}

}


