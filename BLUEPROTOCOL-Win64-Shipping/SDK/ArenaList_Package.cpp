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
	 * 		Name   -> Function ArenaList.ArenaList_C.SetupListItem
	 * 		Flags  -> ()
	 */
	void UArenaList_C::SetupListItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ArenaList.ArenaList_C.SetupListItem");
		
		UArenaList_C_SetupListItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ArenaList.ArenaList_C.MakeArenaInfoList
	 * 		Flags  -> ()
	 */
	void UArenaList_C::MakeArenaInfoList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ArenaList.ArenaList_C.MakeArenaInfoList");
		
		UArenaList_C_MakeArenaInfoList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ArenaList.ArenaList_C.Construct
	 * 		Flags  -> ()
	 */
	void UArenaList_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ArenaList.ArenaList_C.Construct");
		
		UArenaList_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ArenaList.ArenaList_C.BndEvt__BtnDecide_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UArenaList_C::BndEvt__BtnDecide_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ArenaList.ArenaList_C.BndEvt__BtnDecide_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature");
		
		UArenaList_C_BndEvt__BtnDecide_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ArenaList.ArenaList_C.BndEvt__BtnCancel_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UArenaList_C::BndEvt__BtnCancel_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ArenaList.ArenaList_C.BndEvt__BtnCancel_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature");
		
		UArenaList_C_BndEvt__BtnCancel_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ArenaList.ArenaList_C.Destruct
	 * 		Flags  -> ()
	 */
	void UArenaList_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ArenaList.ArenaList_C.Destruct");
		
		UArenaList_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ArenaList.ArenaList_C.OnSelectItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMapInfo                                  ArenaInfo                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UUMG_MatchingMenu_ListItem_C*                item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UArenaList_C::OnSelectItem(const struct FSBMapInfo& ArenaInfo, class UUMG_MatchingMenu_ListItem_C* item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ArenaList.ArenaList_C.OnSelectItem");
		
		UArenaList_C_OnSelectItem_Params params {};
		params.ArenaInfo = ArenaInfo;
		params.item = item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ArenaList.ArenaList_C.ExecuteUbergraph_ArenaList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UArenaList_C::ExecuteUbergraph_ArenaList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ArenaList.ArenaList_C.ExecuteUbergraph_ArenaList");
		
		UArenaList_C_ExecuteUbergraph_ArenaList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ArenaList.ArenaList_C.OnFinish__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UArenaList_C::OnFinish__DelegateSignature(const class FString& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ArenaList.ArenaList_C.OnFinish__DelegateSignature");
		
		UArenaList_C_OnFinish__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UArenaList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UArenaList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ArenaList.ArenaList_C");
		return ptr;
	}

}


