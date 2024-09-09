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
	 * 		Name   -> Function NeedItemList_Item.NeedItemList_Item_C.Initialize Data
	 * 		Flags  -> ()
	 */
	void UNeedItemList_Item_C::InitializeData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NeedItemList_Item.NeedItemList_Item_C.Initialize Data");
		
		UNeedItemList_Item_C_InitializeData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NeedItemList_Item.NeedItemList_Item_C.GetTokenName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TokenID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Name                                                       (Parm, OutParm)
	 */
	void UNeedItemList_Item_C::GetTokenName(int32_t TokenID, class FText* Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NeedItemList_Item.NeedItemList_Item_C.GetTokenName");
		
		UNeedItemList_Item_C_GetTokenName_Params params {};
		params.TokenID = TokenID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Name != nullptr)
			*Name = params.Name;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NeedItemList_Item.NeedItemList_Item_C.InitializeItemLock
	 * 		Flags  -> ()
	 */
	void UNeedItemList_Item_C::InitializeItemLock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NeedItemList_Item.NeedItemList_Item_C.InitializeItemLock");
		
		UNeedItemList_Item_C_InitializeItemLock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NeedItemList_Item.NeedItemList_Item_C.InitializeAmountNum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNeedItemList_Item_C::InitializeAmountNum(int32_t Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NeedItemList_Item.NeedItemList_Item_C.InitializeAmountNum");
		
		UNeedItemList_Item_C_InitializeAmountNum_Params params {};
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NeedItemList_Item.NeedItemList_Item_C.SetItemNum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemNum                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNeedItemList_Item_C::SetItemNum(int32_t ItemNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NeedItemList_Item.NeedItemList_Item_C.SetItemNum");
		
		UNeedItemList_Item_C_SetItemNum_Params params {};
		params.ItemNum = ItemNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NeedItemList_Item.NeedItemList_Item_C.InitializeItem
	 * 		Flags  -> ()
	 */
	void UNeedItemList_Item_C::InitializeItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NeedItemList_Item.NeedItemList_Item_C.InitializeItem");
		
		UNeedItemList_Item_C_InitializeItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NeedItemList_Item.NeedItemList_Item_C.InitializeEventTerm
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InEventTerm                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UNeedItemList_Item_C::InitializeEventTerm(const class FString& InEventTerm)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NeedItemList_Item.NeedItemList_Item_C.InitializeEventTerm");
		
		UNeedItemList_Item_C_InitializeEventTerm_Params params {};
		params.InEventTerm = InEventTerm;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NeedItemList_Item.NeedItemList_Item_C.SetupToken
	 * 		Flags  -> ()
	 */
	void UNeedItemList_Item_C::SetupToken()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NeedItemList_Item.NeedItemList_Item_C.SetupToken");
		
		UNeedItemList_Item_C_SetupToken_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NeedItemList_Item.NeedItemList_Item_C.InitWidthSize
	 * 		Flags  -> ()
	 */
	void UNeedItemList_Item_C::InitWidthSize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NeedItemList_Item.NeedItemList_Item_C.InitWidthSize");
		
		UNeedItemList_Item_C_InitWidthSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NeedItemList_Item.NeedItemList_Item_C.IsCraftable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Craftable                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UNeedItemList_Item_C::IsCraftable(bool* Craftable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NeedItemList_Item.NeedItemList_Item_C.IsCraftable");
		
		UNeedItemList_Item_C_IsCraftable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Craftable != nullptr)
			*Craftable = params.Craftable;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NeedItemList_Item.NeedItemList_Item_C.getStorageItemAmount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemIdx                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OutIsAmount                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNeedItemList_Item_C::getStorageItemAmount(int32_t ItemIdx, int32_t* OutIsAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NeedItemList_Item.NeedItemList_Item_C.getStorageItemAmount");
		
		UNeedItemList_Item_C_getStorageItemAmount_Params params {};
		params.ItemIdx = ItemIdx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsAmount != nullptr)
			*OutIsAmount = params.OutIsAmount;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NeedItemList_Item.NeedItemList_Item_C.getInventoryItemAmount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemIdx                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OutIsAmount                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNeedItemList_Item_C::getInventoryItemAmount(int32_t ItemIdx, int32_t* OutIsAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NeedItemList_Item.NeedItemList_Item_C.getInventoryItemAmount");
		
		UNeedItemList_Item_C_getInventoryItemAmount_Params params {};
		params.ItemIdx = ItemIdx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsAmount != nullptr)
			*OutIsAmount = params.OutIsAmount;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NeedItemList_Item.NeedItemList_Item_C.GetItemName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemIdx                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        OutIsItemNameText                                          (Parm, OutParm)
	 */
	void UNeedItemList_Item_C::GetItemName(int32_t ItemIdx, class FText* OutIsItemNameText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NeedItemList_Item.NeedItemList_Item_C.GetItemName");
		
		UNeedItemList_Item_C_GetItemName_Params params {};
		params.ItemIdx = ItemIdx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsItemNameText != nullptr)
			*OutIsItemNameText = params.OutIsItemNameText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NeedItemList_Item.NeedItemList_Item_C.Construct
	 * 		Flags  -> ()
	 */
	void UNeedItemList_Item_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NeedItemList_Item.NeedItemList_Item_C.Construct");
		
		UNeedItemList_Item_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NeedItemList_Item.NeedItemList_Item_C.OnOwnItemChangeDelegate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBChangeItemAmountParam                    InParam                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UNeedItemList_Item_C::OnOwnItemChangeDelegate(const struct FSBChangeItemAmountParam& InParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NeedItemList_Item.NeedItemList_Item_C.OnOwnItemChangeDelegate");
		
		UNeedItemList_Item_C_OnOwnItemChangeDelegate_Params params {};
		params.InParam = InParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NeedItemList_Item.NeedItemList_Item_C.UnbindItemChangeAmountDelegate
	 * 		Flags  -> ()
	 */
	void UNeedItemList_Item_C::UnbindItemChangeAmountDelegate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NeedItemList_Item.NeedItemList_Item_C.UnbindItemChangeAmountDelegate");
		
		UNeedItemList_Item_C_UnbindItemChangeAmountDelegate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NeedItemList_Item.NeedItemList_Item_C.Destruct
	 * 		Flags  -> ()
	 */
	void UNeedItemList_Item_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NeedItemList_Item.NeedItemList_Item_C.Destruct");
		
		UNeedItemList_Item_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NeedItemList_Item.NeedItemList_Item_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UNeedItemList_Item_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NeedItemList_Item.NeedItemList_Item_C.PreConstruct");
		
		UNeedItemList_Item_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NeedItemList_Item.NeedItemList_Item_C.BindItemChangeAmountDelegate
	 * 		Flags  -> ()
	 */
	void UNeedItemList_Item_C::BindItemChangeAmountDelegate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NeedItemList_Item.NeedItemList_Item_C.BindItemChangeAmountDelegate");
		
		UNeedItemList_Item_C_BindItemChangeAmountDelegate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NeedItemList_Item.NeedItemList_Item_C.Set Need Item Data
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCraftNeedItems                             NeedItem                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UNeedItemList_Item_C::SetNeedItemData(const struct FCraftNeedItems& NeedItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NeedItemList_Item.NeedItemList_Item_C.Set Need Item Data");
		
		UNeedItemList_Item_C_SetNeedItemData_Params params {};
		params.NeedItem = NeedItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NeedItemList_Item.NeedItemList_Item_C.ExecuteUbergraph_NeedItemList_Item
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNeedItemList_Item_C::ExecuteUbergraph_NeedItemList_Item(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NeedItemList_Item.NeedItemList_Item_C.ExecuteUbergraph_NeedItemList_Item");
		
		UNeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNeedItemList_Item_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNeedItemList_Item_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass NeedItemList_Item.NeedItemList_Item_C");
		return ptr;
	}

}


