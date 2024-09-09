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
	 * 		Name   -> Function WBP_StorageRowListItem.WBP_StorageRowListItem_C.OnPreviewMouseButtonDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UWBP_StorageRowListItem_C::OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageRowListItem.WBP_StorageRowListItem_C.OnPreviewMouseButtonDown");
		
		UWBP_StorageRowListItem_C_OnPreviewMouseButtonDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageRowListItem.WBP_StorageRowListItem_C.Set Icon Selected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsSelected                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_StorageRowListItem_C::SetIconSelected(bool IsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageRowListItem.WBP_StorageRowListItem_C.Set Icon Selected");
		
		UWBP_StorageRowListItem_C_SetIconSelected_Params params {};
		params.IsSelected = IsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageRowListItem.WBP_StorageRowListItem_C.SetLockIconVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisibility                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_StorageRowListItem_C::SetLockIconVisibility(bool IsVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageRowListItem.WBP_StorageRowListItem_C.SetLockIconVisibility");
		
		UWBP_StorageRowListItem_C_SetLockIconVisibility_Params params {};
		params.IsVisibility = IsVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageRowListItem.WBP_StorageRowListItem_C.BndEvt__SBButton_ItemName_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_StorageRowListItem_C::BndEvt__SBButton_ItemName_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageRowListItem.WBP_StorageRowListItem_C.BndEvt__SBButton_ItemName_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_StorageRowListItem_C_BndEvt__SBButton_ItemName_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageRowListItem.WBP_StorageRowListItem_C.InitializeItemData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InItemIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            StorageAmount                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FInventoryData                              InventoryData                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWBP_StorageRowListItem_C::InitializeItemData(int32_t InItemIndex, int32_t StorageAmount, const struct FInventoryData& InventoryData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageRowListItem.WBP_StorageRowListItem_C.InitializeItemData");
		
		UWBP_StorageRowListItem_C_InitializeItemData_Params params {};
		params.InItemIndex = InItemIndex;
		params.StorageAmount = StorageAmount;
		params.InventoryData = InventoryData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageRowListItem.WBP_StorageRowListItem_C.UpdetaLockIcon
	 * 		Flags  -> ()
	 */
	void UWBP_StorageRowListItem_C::UpdetaLockIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageRowListItem.WBP_StorageRowListItem_C.UpdetaLockIcon");
		
		UWBP_StorageRowListItem_C_UpdetaLockIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageRowListItem.WBP_StorageRowListItem_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_StorageRowListItem_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageRowListItem.WBP_StorageRowListItem_C.Construct");
		
		UWBP_StorageRowListItem_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageRowListItem.WBP_StorageRowListItem_C.ExecuteUbergraph_WBP_StorageRowListItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_StorageRowListItem_C::ExecuteUbergraph_WBP_StorageRowListItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageRowListItem.WBP_StorageRowListItem_C.ExecuteUbergraph_WBP_StorageRowListItem");
		
		UWBP_StorageRowListItem_C_ExecuteUbergraph_WBP_StorageRowListItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageRowListItem.WBP_StorageRowListItem_C.OnItemClickRight__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInventoryData                              ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		class UWBP_StorageRowListItem_C*                   UpdetaListItem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_StorageRowListItem_C::OnItemClickRight__DelegateSignature(const struct FInventoryData& ItemData, class UWBP_StorageRowListItem_C* UpdetaListItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageRowListItem.WBP_StorageRowListItem_C.OnItemClickRight__DelegateSignature");
		
		UWBP_StorageRowListItem_C_OnItemClickRight__DelegateSignature_Params params {};
		params.ItemData = ItemData;
		params.UpdetaListItem = UpdetaListItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageRowListItem.WBP_StorageRowListItem_C.OnItemClick__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInventoryData                              ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		class UWBP_StorageRowListItem_C*                   UpdetaListItem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_StorageRowListItem_C::OnItemClick__DelegateSignature(const struct FInventoryData& ItemData, class UWBP_StorageRowListItem_C* UpdetaListItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageRowListItem.WBP_StorageRowListItem_C.OnItemClick__DelegateSignature");
		
		UWBP_StorageRowListItem_C_OnItemClick__DelegateSignature_Params params {};
		params.ItemData = ItemData;
		params.UpdetaListItem = UpdetaListItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_StorageRowListItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_StorageRowListItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_StorageRowListItem.WBP_StorageRowListItem_C");
		return ptr;
	}

}


