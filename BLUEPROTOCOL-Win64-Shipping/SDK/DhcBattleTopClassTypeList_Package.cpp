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
	 * 		Name   -> Function DhcBattleTopClassTypeList.DhcBattleTopClassTypeList_C.GetListItemByClassType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBClassType                                       InClassType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDhcBattleTopClassTypeListItem_C*            OutListItem                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDhcBattleTopClassTypeList_C::GetListItemByClassType(ESBClassType InClassType, class UDhcBattleTopClassTypeListItem_C** OutListItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTopClassTypeList.DhcBattleTopClassTypeList_C.GetListItemByClassType");
		
		UDhcBattleTopClassTypeList_C_GetListItemByClassType_Params params {};
		params.InClassType = InClassType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutListItem != nullptr)
			*OutListItem = params.OutListItem;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTopClassTypeList.DhcBattleTopClassTypeList_C.GetCurrSelectedListItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDhcBattleTopClassTypeListItem_C*            OutListItem                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDhcBattleTopClassTypeList_C::GetCurrSelectedListItem(class UDhcBattleTopClassTypeListItem_C** OutListItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTopClassTypeList.DhcBattleTopClassTypeList_C.GetCurrSelectedListItem");
		
		UDhcBattleTopClassTypeList_C_GetCurrSelectedListItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutListItem != nullptr)
			*OutListItem = params.OutListItem;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTopClassTypeList.DhcBattleTopClassTypeList_C.SetSelectedListItemTop
	 * 		Flags  -> ()
	 */
	void UDhcBattleTopClassTypeList_C::SetSelectedListItemTop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTopClassTypeList.DhcBattleTopClassTypeList_C.SetSelectedListItemTop");
		
		UDhcBattleTopClassTypeList_C_SetSelectedListItemTop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTopClassTypeList.DhcBattleTopClassTypeList_C.UpdateListSelectedItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDhcBattleTopClassTypeListItem_C*            InListItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDhcBattleTopClassTypeList_C::UpdateListSelectedItem(class UDhcBattleTopClassTypeListItem_C* InListItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTopClassTypeList.DhcBattleTopClassTypeList_C.UpdateListSelectedItem");
		
		UDhcBattleTopClassTypeList_C_UpdateListSelectedItem_Params params {};
		params.InListItem = InListItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTopClassTypeList.DhcBattleTopClassTypeList_C.SetupList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSBDhcBattleHighScoreInfo>           InScoreInfos                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UDhcBattleTopClassTypeList_C::SetupList(TArray<struct FSBDhcBattleHighScoreInfo>* InScoreInfos)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTopClassTypeList.DhcBattleTopClassTypeList_C.SetupList");
		
		UDhcBattleTopClassTypeList_C_SetupList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InScoreInfos != nullptr)
			*InScoreInfos = params.InScoreInfos;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTopClassTypeList.DhcBattleTopClassTypeList_C.SetPlayerCurrClassType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBClassType                                       InClassType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDhcBattleTopClassTypeList_C::SetPlayerCurrClassType(ESBClassType InClassType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTopClassTypeList.DhcBattleTopClassTypeList_C.SetPlayerCurrClassType");
		
		UDhcBattleTopClassTypeList_C_SetPlayerCurrClassType_Params params {};
		params.InClassType = InClassType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTopClassTypeList.DhcBattleTopClassTypeList_C.CreateList
	 * 		Flags  -> ()
	 */
	void UDhcBattleTopClassTypeList_C::CreateList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTopClassTypeList.DhcBattleTopClassTypeList_C.CreateList");
		
		UDhcBattleTopClassTypeList_C_CreateList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTopClassTypeList.DhcBattleTopClassTypeList_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDhcBattleTopClassTypeList_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTopClassTypeList.DhcBattleTopClassTypeList_C.PreConstruct");
		
		UDhcBattleTopClassTypeList_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTopClassTypeList.DhcBattleTopClassTypeList_C.OnListItemClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDhcBattleTopClassTypeListItem_C*            InSelf                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDhcBattleTopClassTypeList_C::OnListItemClicked(class UDhcBattleTopClassTypeListItem_C* InSelf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTopClassTypeList.DhcBattleTopClassTypeList_C.OnListItemClicked");
		
		UDhcBattleTopClassTypeList_C_OnListItemClicked_Params params {};
		params.InSelf = InSelf;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTopClassTypeList.DhcBattleTopClassTypeList_C.Destruct
	 * 		Flags  -> ()
	 */
	void UDhcBattleTopClassTypeList_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTopClassTypeList.DhcBattleTopClassTypeList_C.Destruct");
		
		UDhcBattleTopClassTypeList_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTopClassTypeList.DhcBattleTopClassTypeList_C.ExecuteUbergraph_DhcBattleTopClassTypeList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDhcBattleTopClassTypeList_C::ExecuteUbergraph_DhcBattleTopClassTypeList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTopClassTypeList.DhcBattleTopClassTypeList_C.ExecuteUbergraph_DhcBattleTopClassTypeList");
		
		UDhcBattleTopClassTypeList_C_ExecuteUbergraph_DhcBattleTopClassTypeList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTopClassTypeList.DhcBattleTopClassTypeList_C.OnClassTypeListItemSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBClassType                                       InClassType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBDhcBattleHighScoreInfo                   InScoreInfo                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               InIsScoreInfoEmpty                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDhcBattleTopClassTypeList_C::OnClassTypeListItemSelected__DelegateSignature(ESBClassType InClassType, const struct FSBDhcBattleHighScoreInfo& InScoreInfo, bool InIsScoreInfoEmpty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTopClassTypeList.DhcBattleTopClassTypeList_C.OnClassTypeListItemSelected__DelegateSignature");
		
		UDhcBattleTopClassTypeList_C_OnClassTypeListItemSelected__DelegateSignature_Params params {};
		params.InClassType = InClassType;
		params.InScoreInfo = InScoreInfo;
		params.InIsScoreInfoEmpty = InIsScoreInfoEmpty;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDhcBattleTopClassTypeList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDhcBattleTopClassTypeList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DhcBattleTopClassTypeList.DhcBattleTopClassTypeList_C");
		return ptr;
	}

}


