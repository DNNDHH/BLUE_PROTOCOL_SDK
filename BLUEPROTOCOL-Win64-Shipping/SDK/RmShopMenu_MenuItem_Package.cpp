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
	 * 		Name   -> Function RmShopMenu_MenuItem.RmShopMenu_MenuItem_C.SelectBtn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSelected                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URmShopMenu_MenuItem_C::SelectBtn(bool bSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu_MenuItem.RmShopMenu_MenuItem_C.SelectBtn");
		
		URmShopMenu_MenuItem_C_SelectBtn_Params params {};
		params.bSelected = bSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu_MenuItem.RmShopMenu_MenuItem_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URmShopMenu_MenuItem_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu_MenuItem.RmShopMenu_MenuItem_C.PreConstruct");
		
		URmShopMenu_MenuItem_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu_MenuItem.RmShopMenu_MenuItem_C.Construct
	 * 		Flags  -> ()
	 */
	void URmShopMenu_MenuItem_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu_MenuItem.RmShopMenu_MenuItem_C.Construct");
		
		URmShopMenu_MenuItem_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu_MenuItem.RmShopMenu_MenuItem_C.BndEvt__BtnHit_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void URmShopMenu_MenuItem_C::BndEvt__BtnHit_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu_MenuItem.RmShopMenu_MenuItem_C.BndEvt__BtnHit_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");
		
		URmShopMenu_MenuItem_C_BndEvt__BtnHit_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu_MenuItem.RmShopMenu_MenuItem_C.Destruct
	 * 		Flags  -> ()
	 */
	void URmShopMenu_MenuItem_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu_MenuItem.RmShopMenu_MenuItem_C.Destruct");
		
		URmShopMenu_MenuItem_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu_MenuItem.RmShopMenu_MenuItem_C.OnUpdateSeasonPassAnyInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URmShopMenu_MenuItem_C::OnUpdateSeasonPassAnyInfo(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu_MenuItem.RmShopMenu_MenuItem_C.OnUpdateSeasonPassAnyInfo");
		
		URmShopMenu_MenuItem_C_OnUpdateSeasonPassAnyInfo_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu_MenuItem.RmShopMenu_MenuItem_C.UpdateSeasonPassFlag
	 * 		Flags  -> ()
	 */
	void URmShopMenu_MenuItem_C::UpdateSeasonPassFlag()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu_MenuItem.RmShopMenu_MenuItem_C.UpdateSeasonPassFlag");
		
		URmShopMenu_MenuItem_C_UpdateSeasonPassFlag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu_MenuItem.RmShopMenu_MenuItem_C.ExecuteUbergraph_RmShopMenu_MenuItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URmShopMenu_MenuItem_C::ExecuteUbergraph_RmShopMenu_MenuItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu_MenuItem.RmShopMenu_MenuItem_C.ExecuteUbergraph_RmShopMenu_MenuItem");
		
		URmShopMenu_MenuItem_C_ExecuteUbergraph_RmShopMenu_MenuItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenu_MenuItem.RmShopMenu_MenuItem_C.OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void URmShopMenu_MenuItem_C::OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenu_MenuItem.RmShopMenu_MenuItem_C.OnClicked__DelegateSignature");
		
		URmShopMenu_MenuItem_C_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URmShopMenu_MenuItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URmShopMenu_MenuItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RmShopMenu_MenuItem.RmShopMenu_MenuItem_C");
		return ptr;
	}

}


