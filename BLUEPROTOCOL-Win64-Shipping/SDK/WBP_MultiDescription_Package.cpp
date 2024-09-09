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
	 * 		Name   -> Function WBP_MultiDescription.WBP_MultiDescription_C.GetSelectItemList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FInventoryItemData>                  SelectItemData                                             (Parm, OutParm)
	 */
	void UWBP_MultiDescription_C::GetSelectItemList(TArray<struct FInventoryItemData>* SelectItemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MultiDescription.WBP_MultiDescription_C.GetSelectItemList");
		
		UWBP_MultiDescription_C_GetSelectItemList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SelectItemData != nullptr)
			*SelectItemData = params.SelectItemData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MultiDescription.WBP_MultiDescription_C.Remove Select Item
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInventoryItemData                          item                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UWBP_MultiDescription_C::RemoveSelectItem(const struct FInventoryItemData& item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MultiDescription.WBP_MultiDescription_C.Remove Select Item");
		
		UWBP_MultiDescription_C_RemoveSelectItem_Params params {};
		params.item = item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MultiDescription.WBP_MultiDescription_C.IsSaleItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInventoryItemData                          InventoryItemData                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		bool                                               IsSaleItem                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_MultiDescription_C::IsSaleItem(const struct FInventoryItemData& InventoryItemData, bool* IsSaleItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MultiDescription.WBP_MultiDescription_C.IsSaleItem");
		
		UWBP_MultiDescription_C_IsSaleItem_Params params {};
		params.InventoryItemData = InventoryItemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsSaleItem != nullptr)
			*IsSaleItem = params.IsSaleItem;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MultiDescription.WBP_MultiDescription_C.UpdateButton
	 * 		Flags  -> ()
	 */
	void UWBP_MultiDescription_C::UpdateButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MultiDescription.WBP_MultiDescription_C.UpdateButton");
		
		UWBP_MultiDescription_C_UpdateButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MultiDescription.WBP_MultiDescription_C.Get Total Item Num
	 * 		Flags  -> ()
	 */
	int32_t UWBP_MultiDescription_C::GetTotalItemNum()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MultiDescription.WBP_MultiDescription_C.Get Total Item Num");
		
		UWBP_MultiDescription_C_GetTotalItemNum_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MultiDescription.WBP_MultiDescription_C.SetInventoryStorageList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWBP_StorageRowListOwner_C*                  InventoryStorageList                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_MultiDescription_C::SetInventoryStorageList(class UWBP_StorageRowListOwner_C* InventoryStorageList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MultiDescription.WBP_MultiDescription_C.SetInventoryStorageList");
		
		UWBP_MultiDescription_C_SetInventoryStorageList_Params params {};
		params.InventoryStorageList = InventoryStorageList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MultiDescription.WBP_MultiDescription_C.SetSalesItemList
	 * 		Flags  -> ()
	 */
	void UWBP_MultiDescription_C::SetSalesItemList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MultiDescription.WBP_MultiDescription_C.SetSalesItemList");
		
		UWBP_MultiDescription_C_SetSalesItemList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MultiDescription.WBP_MultiDescription_C.AllRemoveSalesItems
	 * 		Flags  -> ()
	 */
	void UWBP_MultiDescription_C::AllRemoveSalesItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MultiDescription.WBP_MultiDescription_C.AllRemoveSalesItems");
		
		UWBP_MultiDescription_C_AllRemoveSalesItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MultiDescription.WBP_MultiDescription_C.SetSelectItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemIconBtn_C*                              InputPin                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EStorageMultipleSalesWindowType                    NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_MultiDescription_C::SetSelectItems(class UItemIconBtn_C* InputPin, EStorageMultipleSalesWindowType* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MultiDescription.WBP_MultiDescription_C.SetSelectItems");
		
		UWBP_MultiDescription_C_SetSelectItems_Params params {};
		params.InputPin = InputPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MultiDescription.WBP_MultiDescription_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_MultiDescription_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MultiDescription.WBP_MultiDescription_C.Construct");
		
		UWBP_MultiDescription_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MultiDescription.WBP_MultiDescription_C.UpdateSalesItems
	 * 		Flags  -> ()
	 */
	void UWBP_MultiDescription_C::UpdateSalesItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MultiDescription.WBP_MultiDescription_C.UpdateSalesItems");
		
		UWBP_MultiDescription_C_UpdateSalesItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MultiDescription.WBP_MultiDescription_C.AddList
	 * 		Flags  -> ()
	 */
	void UWBP_MultiDescription_C::AddList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MultiDescription.WBP_MultiDescription_C.AddList");
		
		UWBP_MultiDescription_C_AddList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MultiDescription.WBP_MultiDescription_C.AlignRequiredNum
	 * 		Flags  -> ()
	 */
	void UWBP_MultiDescription_C::AlignRequiredNum()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MultiDescription.WBP_MultiDescription_C.AlignRequiredNum");
		
		UWBP_MultiDescription_C_AlignRequiredNum_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MultiDescription.WBP_MultiDescription_C.SettingList
	 * 		Flags  -> ()
	 */
	void UWBP_MultiDescription_C::SettingList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MultiDescription.WBP_MultiDescription_C.SettingList");
		
		UWBP_MultiDescription_C_SettingList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MultiDescription.WBP_MultiDescription_C.BndEvt__BtnSale1_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_MultiDescription_C::BndEvt__BtnSale1_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MultiDescription.WBP_MultiDescription_C.BndEvt__BtnSale1_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature");
		
		UWBP_MultiDescription_C_BndEvt__BtnSale1_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MultiDescription.WBP_MultiDescription_C.BndEvt__BtnMoveBag_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_MultiDescription_C::BndEvt__BtnMoveBag_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MultiDescription.WBP_MultiDescription_C.BndEvt__BtnMoveBag_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature");
		
		UWBP_MultiDescription_C_BndEvt__BtnMoveBag_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MultiDescription.WBP_MultiDescription_C.BndEvt__BtnTrash_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_MultiDescription_C::BndEvt__BtnTrash_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MultiDescription.WBP_MultiDescription_C.BndEvt__BtnTrash_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature");
		
		UWBP_MultiDescription_C_BndEvt__BtnTrash_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MultiDescription.WBP_MultiDescription_C.UpdatePrice
	 * 		Flags  -> ()
	 */
	void UWBP_MultiDescription_C::UpdatePrice()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MultiDescription.WBP_MultiDescription_C.UpdatePrice");
		
		UWBP_MultiDescription_C_UpdatePrice_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MultiDescription.WBP_MultiDescription_C.CustomEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInventoryItemData                          NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWBP_MultiDescription_C::CustomEvent_1(const struct FInventoryItemData& NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MultiDescription.WBP_MultiDescription_C.CustomEvent_1");
		
		UWBP_MultiDescription_C_CustomEvent_1_Params params {};
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MultiDescription.WBP_MultiDescription_C.UpdateSelectNum
	 * 		Flags  -> ()
	 */
	void UWBP_MultiDescription_C::UpdateSelectNum()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MultiDescription.WBP_MultiDescription_C.UpdateSelectNum");
		
		UWBP_MultiDescription_C_UpdateSelectNum_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MultiDescription.WBP_MultiDescription_C.TriInAnimationPlay
	 * 		Flags  -> ()
	 */
	void UWBP_MultiDescription_C::TriInAnimationPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MultiDescription.WBP_MultiDescription_C.TriInAnimationPlay");
		
		UWBP_MultiDescription_C_TriInAnimationPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MultiDescription.WBP_MultiDescription_C.ExecuteUbergraph_WBP_MultiDescription
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_MultiDescription_C::ExecuteUbergraph_WBP_MultiDescription(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MultiDescription.WBP_MultiDescription_C.ExecuteUbergraph_WBP_MultiDescription");
		
		UWBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MultiDescription.WBP_MultiDescription_C.Close__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_MultiDescription_C::Close__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MultiDescription.WBP_MultiDescription_C.Close__DelegateSignature");
		
		UWBP_MultiDescription_C_Close__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MultiDescription.WBP_MultiDescription_C.OnClick__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInventoryItemData                          InventoryData                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWBP_MultiDescription_C::OnClick__DelegateSignature(const struct FInventoryItemData& InventoryData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MultiDescription.WBP_MultiDescription_C.OnClick__DelegateSignature");
		
		UWBP_MultiDescription_C_OnClick__DelegateSignature_Params params {};
		params.InventoryData = InventoryData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MultiDescription.WBP_MultiDescription_C.MultipleTrash__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FInventoryItemData>                  InSelectItemList                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_MultiDescription_C::MultipleTrash__DelegateSignature(TArray<struct FInventoryItemData>* InSelectItemList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MultiDescription.WBP_MultiDescription_C.MultipleTrash__DelegateSignature");
		
		UWBP_MultiDescription_C_MultipleTrash__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InSelectItemList != nullptr)
			*InSelectItemList = params.InSelectItemList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MultiDescription.WBP_MultiDescription_C.MultipleMoveBag__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FInventoryItemData>                  InSelectItemList                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_MultiDescription_C::MultipleMoveBag__DelegateSignature(TArray<struct FInventoryItemData>* InSelectItemList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MultiDescription.WBP_MultiDescription_C.MultipleMoveBag__DelegateSignature");
		
		UWBP_MultiDescription_C_MultipleMoveBag__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InSelectItemList != nullptr)
			*InSelectItemList = params.InSelectItemList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MultiDescription.WBP_MultiDescription_C.MultipleMoveStorage__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FInventoryItemData>                  InSelectItemList                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_MultiDescription_C::MultipleMoveStorage__DelegateSignature(TArray<struct FInventoryItemData>* InSelectItemList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MultiDescription.WBP_MultiDescription_C.MultipleMoveStorage__DelegateSignature");
		
		UWBP_MultiDescription_C_MultipleMoveStorage__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InSelectItemList != nullptr)
			*InSelectItemList = params.InSelectItemList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MultiDescription.WBP_MultiDescription_C.MultipleSales__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InTotalPrice                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FInventoryItemData>                  InSelectItemList                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_MultiDescription_C::MultipleSales__DelegateSignature(int32_t InTotalPrice, TArray<struct FInventoryItemData>* InSelectItemList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MultiDescription.WBP_MultiDescription_C.MultipleSales__DelegateSignature");
		
		UWBP_MultiDescription_C_MultipleSales__DelegateSignature_Params params {};
		params.InTotalPrice = InTotalPrice;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InSelectItemList != nullptr)
			*InSelectItemList = params.InSelectItemList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_MultiDescription_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_MultiDescription_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_MultiDescription.WBP_MultiDescription_C");
		return ptr;
	}

}


