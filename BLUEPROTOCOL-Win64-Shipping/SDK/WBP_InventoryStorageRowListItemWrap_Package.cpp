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
	 * 		Name   -> Function WBP_InventoryStorageRowListItemWrap.WBP_InventoryStorageRowListItemWrap_C.SetScrollVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Offset                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_InventoryStorageRowListItemWrap_C::SetScrollVisible(float Offset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryStorageRowListItemWrap.WBP_InventoryStorageRowListItemWrap_C.SetScrollVisible");
		
		UWBP_InventoryStorageRowListItemWrap_C_SetScrollVisible_Params params {};
		params.Offset = Offset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryStorageRowListItemWrap.WBP_InventoryStorageRowListItemWrap_C.Destruct
	 * 		Flags  -> ()
	 */
	void UWBP_InventoryStorageRowListItemWrap_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryStorageRowListItemWrap.WBP_InventoryStorageRowListItemWrap_C.Destruct");
		
		UWBP_InventoryStorageRowListItemWrap_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryStorageRowListItemWrap.WBP_InventoryStorageRowListItemWrap_C.InitializeItemData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InItemIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            StorageAmount                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FInventoryData                              InventoryData                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWBP_InventoryStorageRowListItemWrap_C::InitializeItemData(int32_t InItemIndex, int32_t StorageAmount, const struct FInventoryData& InventoryData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryStorageRowListItemWrap.WBP_InventoryStorageRowListItemWrap_C.InitializeItemData");
		
		UWBP_InventoryStorageRowListItemWrap_C_InitializeItemData_Params params {};
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
	 * 		Name   -> Function WBP_InventoryStorageRowListItemWrap.WBP_InventoryStorageRowListItemWrap_C.CreateAndInitialize
	 * 		Flags  -> ()
	 */
	void UWBP_InventoryStorageRowListItemWrap_C::CreateAndInitialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryStorageRowListItemWrap.WBP_InventoryStorageRowListItemWrap_C.CreateAndInitialize");
		
		UWBP_InventoryStorageRowListItemWrap_C_CreateAndInitialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryStorageRowListItemWrap.WBP_InventoryStorageRowListItemWrap_C.CustomEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInventoryData                              ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		class UWBP_InventoryStorageRowListItem_C*          UpdetaListItem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_InventoryStorageRowListItemWrap_C::CustomEvent_1(const struct FInventoryData& ItemData, class UWBP_InventoryStorageRowListItem_C* UpdetaListItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryStorageRowListItemWrap.WBP_InventoryStorageRowListItemWrap_C.CustomEvent_1");
		
		UWBP_InventoryStorageRowListItemWrap_C_CustomEvent_1_Params params {};
		params.ItemData = ItemData;
		params.UpdetaListItem = UpdetaListItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryStorageRowListItemWrap.WBP_InventoryStorageRowListItemWrap_C.CustomEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInventoryData                              ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		class UWBP_InventoryStorageRowListItem_C*          UpdetaListItem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_InventoryStorageRowListItemWrap_C::CustomEvent_2(const struct FInventoryData& ItemData, class UWBP_InventoryStorageRowListItem_C* UpdetaListItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryStorageRowListItemWrap.WBP_InventoryStorageRowListItemWrap_C.CustomEvent_2");
		
		UWBP_InventoryStorageRowListItemWrap_C_CustomEvent_2_Params params {};
		params.ItemData = ItemData;
		params.UpdetaListItem = UpdetaListItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryStorageRowListItemWrap.WBP_InventoryStorageRowListItemWrap_C.Initialize
	 * 		Flags  -> ()
	 */
	void UWBP_InventoryStorageRowListItemWrap_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryStorageRowListItemWrap.WBP_InventoryStorageRowListItemWrap_C.Initialize");
		
		UWBP_InventoryStorageRowListItemWrap_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryStorageRowListItemWrap.WBP_InventoryStorageRowListItemWrap_C.Set Icon Selected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsSelected                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_InventoryStorageRowListItemWrap_C::SetIconSelected(bool IsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryStorageRowListItemWrap.WBP_InventoryStorageRowListItemWrap_C.Set Icon Selected");
		
		UWBP_InventoryStorageRowListItemWrap_C_SetIconSelected_Params params {};
		params.IsSelected = IsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryStorageRowListItemWrap.WBP_InventoryStorageRowListItemWrap_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_InventoryStorageRowListItemWrap_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryStorageRowListItemWrap.WBP_InventoryStorageRowListItemWrap_C.Construct");
		
		UWBP_InventoryStorageRowListItemWrap_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryStorageRowListItemWrap.WBP_InventoryStorageRowListItemWrap_C.ExecuteUbergraph_WBP_InventoryStorageRowListItemWrap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_InventoryStorageRowListItemWrap_C::ExecuteUbergraph_WBP_InventoryStorageRowListItemWrap(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryStorageRowListItemWrap.WBP_InventoryStorageRowListItemWrap_C.ExecuteUbergraph_WBP_InventoryStorageRowListItemWrap");
		
		UWBP_InventoryStorageRowListItemWrap_C_ExecuteUbergraph_WBP_InventoryStorageRowListItemWrap_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryStorageRowListItemWrap.WBP_InventoryStorageRowListItemWrap_C.OnItemClickRight__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInventoryData                              ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		class UWBP_InventoryStorageRowListItem_C*          UpdetaListItem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_InventoryStorageRowListItemWrap_C::OnItemClickRight__DelegateSignature(const struct FInventoryData& ItemData, class UWBP_InventoryStorageRowListItem_C* UpdetaListItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryStorageRowListItemWrap.WBP_InventoryStorageRowListItemWrap_C.OnItemClickRight__DelegateSignature");
		
		UWBP_InventoryStorageRowListItemWrap_C_OnItemClickRight__DelegateSignature_Params params {};
		params.ItemData = ItemData;
		params.UpdetaListItem = UpdetaListItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryStorageRowListItemWrap.WBP_InventoryStorageRowListItemWrap_C.OnItemClick__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInventoryData                              ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		class UWBP_InventoryStorageRowListItem_C*          UpdetaListItem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_InventoryStorageRowListItemWrap_C::OnItemClick__DelegateSignature(const struct FInventoryData& ItemData, class UWBP_InventoryStorageRowListItem_C* UpdetaListItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryStorageRowListItemWrap.WBP_InventoryStorageRowListItemWrap_C.OnItemClick__DelegateSignature");
		
		UWBP_InventoryStorageRowListItemWrap_C_OnItemClick__DelegateSignature_Params params {};
		params.ItemData = ItemData;
		params.UpdetaListItem = UpdetaListItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_InventoryStorageRowListItemWrap_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_InventoryStorageRowListItemWrap_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_InventoryStorageRowListItemWrap.WBP_InventoryStorageRowListItemWrap_C");
		return ptr;
	}

}


