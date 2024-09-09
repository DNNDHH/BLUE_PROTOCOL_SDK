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
	 * 		Name   -> Function EquipStatusView.EquipStatusView_C.SetPrevDataImagine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                PrevInfo                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UEquipStatusView_C::SetPrevDataImagine(const struct FOwnItemInfo& PrevInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipStatusView.EquipStatusView_C.SetPrevDataImagine");
		
		UEquipStatusView_C_SetPrevDataImagine_Params params {};
		params.PrevInfo = PrevInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipStatusView.EquipStatusView_C.SetPrevData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                OwnItemInfo                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UEquipStatusView_C::SetPrevData(const struct FOwnItemInfo& OwnItemInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipStatusView.EquipStatusView_C.SetPrevData");
		
		UEquipStatusView_C_SetPrevData_Params params {};
		params.OwnItemInfo = OwnItemInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipStatusView.EquipStatusView_C.SetWeapon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                Info                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UEquipStatusView_C::SetWeapon(const struct FOwnItemInfo& Info)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipStatusView.EquipStatusView_C.SetWeapon");
		
		UEquipStatusView_C_SetWeapon_Params params {};
		params.Info = Info;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipStatusView.EquipStatusView_C.SetImagine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                Info                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UEquipStatusView_C::SetImagine(const struct FOwnItemInfo& Info)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipStatusView.EquipStatusView_C.SetImagine");
		
		UEquipStatusView_C_SetImagine_Params params {};
		params.Info = Info;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipStatusView.EquipStatusView_C.SetValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                Info                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UEquipStatusView_C::SetValue(const struct FOwnItemInfo& Info)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipStatusView.EquipStatusView_C.SetValue");
		
		UEquipStatusView_C_SetValue_Params params {};
		params.Info = Info;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipStatusView.EquipStatusView_C.Construct
	 * 		Flags  -> ()
	 */
	void UEquipStatusView_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipStatusView.EquipStatusView_C.Construct");
		
		UEquipStatusView_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipStatusView.EquipStatusView_C.ExecuteUbergraph_EquipStatusView
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEquipStatusView_C::ExecuteUbergraph_EquipStatusView(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipStatusView.EquipStatusView_C.ExecuteUbergraph_EquipStatusView");
		
		UEquipStatusView_C_ExecuteUbergraph_EquipStatusView_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEquipStatusView_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEquipStatusView_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass EquipStatusView.EquipStatusView_C");
		return ptr;
	}

}


