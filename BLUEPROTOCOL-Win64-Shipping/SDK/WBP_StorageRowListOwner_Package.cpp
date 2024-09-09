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
	 * 		Name   -> Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.MaxScrollOffset
	 * 		Flags  -> ()
	 */
	float UWBP_StorageRowListOwner_C::MaxScrollOffset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.MaxScrollOffset");
		
		UWBP_StorageRowListOwner_C_MaxScrollOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.SelectsItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWBP_StorageRowListItem_C*                   InputPin                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bAdd                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_StorageRowListOwner_C::SelectsItems(class UWBP_StorageRowListItem_C* InputPin, bool* bAdd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.SelectsItems");
		
		UWBP_StorageRowListOwner_C_SelectsItems_Params params {};
		params.InputPin = InputPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bAdd != nullptr)
			*bAdd = params.bAdd;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.SwitchMultipleSelection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bAdd                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_StorageRowListOwner_C::SwitchMultipleSelection(bool* bAdd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.SwitchMultipleSelection");
		
		UWBP_StorageRowListOwner_C_SwitchMultipleSelection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bAdd != nullptr)
			*bAdd = params.bAdd;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.CreateLists
	 * 		Flags  -> ()
	 */
	void UWBP_StorageRowListOwner_C::CreateLists()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.CreateLists");
		
		UWBP_StorageRowListOwner_C_CreateLists_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.RemoveSelectListItems
	 * 		Flags  -> ()
	 */
	void UWBP_StorageRowListOwner_C::RemoveSelectListItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.RemoveSelectListItems");
		
		UWBP_StorageRowListOwner_C_RemoveSelectListItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.SetScrollBoxSizeX
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              SizeX                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_StorageRowListOwner_C::SetScrollBoxSizeX(float SizeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.SetScrollBoxSizeX");
		
		UWBP_StorageRowListOwner_C_SetScrollBoxSizeX_Params params {};
		params.SizeX = SizeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.StorageItemGet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBItemSortType                                    SortType                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EItemFilterType                                    InFilter                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FFilterGroup>                        FilterArray                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_StorageRowListOwner_C::StorageItemGet(ESBItemSortType SortType, EItemFilterType InFilter, TArray<struct FFilterGroup>* FilterArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.StorageItemGet");
		
		UWBP_StorageRowListOwner_C_StorageItemGet_Params params {};
		params.SortType = SortType;
		params.InFilter = InFilter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FilterArray != nullptr)
			*FilterArray = params.FilterArray;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.AddStorageListItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              CreateDelay                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_StorageRowListOwner_C::AddStorageListItem(float CreateDelay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.AddStorageListItem");
		
		UWBP_StorageRowListOwner_C_AddStorageListItem_Params params {};
		params.CreateDelay = CreateDelay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.ResettingStorageListItem
	 * 		Flags  -> ()
	 */
	void UWBP_StorageRowListOwner_C::ResettingStorageListItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.ResettingStorageListItem");
		
		UWBP_StorageRowListOwner_C_ResettingStorageListItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.UpdetaItemList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBItemSortType                                    SortType2                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EItemFilterType                                    FilterType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FFilterGroup>                        FilterArray                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               ScrollReset                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_StorageRowListOwner_C::UpdetaItemList(ESBItemSortType SortType2, EItemFilterType FilterType, TArray<struct FFilterGroup>* FilterArray, bool ScrollReset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.UpdetaItemList");
		
		UWBP_StorageRowListOwner_C_UpdetaItemList_Params params {};
		params.SortType2 = SortType2;
		params.FilterType = FilterType;
		params.ScrollReset = ScrollReset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FilterArray != nullptr)
			*FilterArray = params.FilterArray;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.CustomEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInventoryData                              ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		class UWBP_StorageRowListItem_C*                   UpdetaListItem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_StorageRowListOwner_C::CustomEvent_1(const struct FInventoryData& ItemData, class UWBP_StorageRowListItem_C* UpdetaListItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.CustomEvent_1");
		
		UWBP_StorageRowListOwner_C_CustomEvent_1_Params params {};
		params.ItemData = ItemData;
		params.UpdetaListItem = UpdetaListItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.LockIconUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UniqueId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               bLock                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_StorageRowListOwner_C::LockIconUpdate(const class FString& UniqueId, bool bLock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.LockIconUpdate");
		
		UWBP_StorageRowListOwner_C_LockIconUpdate_Params params {};
		params.UniqueId = UniqueId;
		params.bLock = bLock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.IconAllSelectfalse
	 * 		Flags  -> ()
	 */
	void UWBP_StorageRowListOwner_C::IconAllSelectfalse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.IconAllSelectfalse");
		
		UWBP_StorageRowListOwner_C_IconAllSelectfalse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.CustomEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInventoryData                              ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		class UWBP_StorageRowListItem_C*                   UpdetaListItem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_StorageRowListOwner_C::CustomEvent_2(const struct FInventoryData& ItemData, class UWBP_StorageRowListItem_C* UpdetaListItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.CustomEvent_2");
		
		UWBP_StorageRowListOwner_C_CustomEvent_2_Params params {};
		params.ItemData = ItemData;
		params.UpdetaListItem = UpdetaListItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.MultiStart
	 * 		Flags  -> ()
	 */
	void UWBP_StorageRowListOwner_C::MultiStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.MultiStart");
		
		UWBP_StorageRowListOwner_C_MultiStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.Reset
	 * 		Flags  -> ()
	 */
	void UWBP_StorageRowListOwner_C::Reset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.Reset");
		
		UWBP_StorageRowListOwner_C_Reset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.AddOptionFilter
	 * 		Flags  -> ()
	 */
	void UWBP_StorageRowListOwner_C::AddOptionFilter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.AddOptionFilter");
		
		UWBP_StorageRowListOwner_C_AddOptionFilter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_StorageRowListOwner_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.PreConstruct");
		
		UWBP_StorageRowListOwner_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.BndEvt__WBP_StorageRowListOwner_ScrollBox_0_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              CurrentOffset                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_StorageRowListOwner_C::BndEvt__WBP_StorageRowListOwner_ScrollBox_0_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(float CurrentOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.BndEvt__WBP_StorageRowListOwner_ScrollBox_0_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature");
		
		UWBP_StorageRowListOwner_C_BndEvt__WBP_StorageRowListOwner_ScrollBox_0_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature_Params params {};
		params.CurrentOffset = CurrentOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.ScrollVisibleUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Offset                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_StorageRowListOwner_C::ScrollVisibleUpdate(float Offset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.ScrollVisibleUpdate");
		
		UWBP_StorageRowListOwner_C_ScrollVisibleUpdate_Params params {};
		params.Offset = Offset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.ExecuteUbergraph_WBP_StorageRowListOwner
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_StorageRowListOwner_C::ExecuteUbergraph_WBP_StorageRowListOwner(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.ExecuteUbergraph_WBP_StorageRowListOwner");
		
		UWBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.OnItemClickRight__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInventoryData                              NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWBP_StorageRowListOwner_C::OnItemClickRight__DelegateSignature(const struct FInventoryData& NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.OnItemClickRight__DelegateSignature");
		
		UWBP_StorageRowListOwner_C_OnItemClickRight__DelegateSignature_Params params {};
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.OnItemClick__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInventoryData                              OnItemClick                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWBP_StorageRowListOwner_C::OnItemClick__DelegateSignature(const struct FInventoryData& OnItemClick)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.OnItemClick__DelegateSignature");
		
		UWBP_StorageRowListOwner_C_OnItemClick__DelegateSignature_Params params {};
		params.OnItemClick = OnItemClick;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_StorageRowListOwner_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_StorageRowListOwner_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_StorageRowListOwner.WBP_StorageRowListOwner_C");
		return ptr;
	}

}


