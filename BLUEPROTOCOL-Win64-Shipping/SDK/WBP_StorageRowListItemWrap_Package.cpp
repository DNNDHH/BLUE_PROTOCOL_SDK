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
	 * 		Name   -> Function WBP_StorageRowListItemWrap.WBP_StorageRowListItemWrap_C.SetScrollVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Offset                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_StorageRowListItemWrap_C::SetScrollVisible(float Offset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageRowListItemWrap.WBP_StorageRowListItemWrap_C.SetScrollVisible");
		
		UWBP_StorageRowListItemWrap_C_SetScrollVisible_Params params {};
		params.Offset = Offset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageRowListItemWrap.WBP_StorageRowListItemWrap_C.InitializeItemData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InItemIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            StorageAmount                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FInventoryData                              InventoryData                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		bool                                               enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_StorageRowListItemWrap_C::InitializeItemData(int32_t InItemIndex, int32_t StorageAmount, const struct FInventoryData& InventoryData, bool enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageRowListItemWrap.WBP_StorageRowListItemWrap_C.InitializeItemData");
		
		UWBP_StorageRowListItemWrap_C_InitializeItemData_Params params {};
		params.InItemIndex = InItemIndex;
		params.StorageAmount = StorageAmount;
		params.InventoryData = InventoryData;
		params.enable = enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageRowListItemWrap.WBP_StorageRowListItemWrap_C.CustomEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInventoryData                              ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		class UWBP_StorageRowListItem_C*                   UpdetaListItem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_StorageRowListItemWrap_C::CustomEvent_1(const struct FInventoryData& ItemData, class UWBP_StorageRowListItem_C* UpdetaListItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageRowListItemWrap.WBP_StorageRowListItemWrap_C.CustomEvent_1");
		
		UWBP_StorageRowListItemWrap_C_CustomEvent_1_Params params {};
		params.ItemData = ItemData;
		params.UpdetaListItem = UpdetaListItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageRowListItemWrap.WBP_StorageRowListItemWrap_C.CustomEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInventoryData                              ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		class UWBP_StorageRowListItem_C*                   UpdetaListItem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_StorageRowListItemWrap_C::CustomEvent_2(const struct FInventoryData& ItemData, class UWBP_StorageRowListItem_C* UpdetaListItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageRowListItemWrap.WBP_StorageRowListItemWrap_C.CustomEvent_2");
		
		UWBP_StorageRowListItemWrap_C_CustomEvent_2_Params params {};
		params.ItemData = ItemData;
		params.UpdetaListItem = UpdetaListItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageRowListItemWrap.WBP_StorageRowListItemWrap_C.Initialize
	 * 		Flags  -> ()
	 */
	void UWBP_StorageRowListItemWrap_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageRowListItemWrap.WBP_StorageRowListItemWrap_C.Initialize");
		
		UWBP_StorageRowListItemWrap_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageRowListItemWrap.WBP_StorageRowListItemWrap_C.CreateAndInitialize
	 * 		Flags  -> ()
	 */
	void UWBP_StorageRowListItemWrap_C::CreateAndInitialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageRowListItemWrap.WBP_StorageRowListItemWrap_C.CreateAndInitialize");
		
		UWBP_StorageRowListItemWrap_C_CreateAndInitialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageRowListItemWrap.WBP_StorageRowListItemWrap_C.Destruct
	 * 		Flags  -> ()
	 */
	void UWBP_StorageRowListItemWrap_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageRowListItemWrap.WBP_StorageRowListItemWrap_C.Destruct");
		
		UWBP_StorageRowListItemWrap_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageRowListItemWrap.WBP_StorageRowListItemWrap_C.Set Icon Selected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsSelected                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_StorageRowListItemWrap_C::SetIconSelected(bool IsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageRowListItemWrap.WBP_StorageRowListItemWrap_C.Set Icon Selected");
		
		UWBP_StorageRowListItemWrap_C_SetIconSelected_Params params {};
		params.IsSelected = IsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageRowListItemWrap.WBP_StorageRowListItemWrap_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_StorageRowListItemWrap_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageRowListItemWrap.WBP_StorageRowListItemWrap_C.Construct");
		
		UWBP_StorageRowListItemWrap_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageRowListItemWrap.WBP_StorageRowListItemWrap_C.ExecuteUbergraph_WBP_StorageRowListItemWrap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_StorageRowListItemWrap_C::ExecuteUbergraph_WBP_StorageRowListItemWrap(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageRowListItemWrap.WBP_StorageRowListItemWrap_C.ExecuteUbergraph_WBP_StorageRowListItemWrap");
		
		UWBP_StorageRowListItemWrap_C_ExecuteUbergraph_WBP_StorageRowListItemWrap_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageRowListItemWrap.WBP_StorageRowListItemWrap_C.OnItemClickRight__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInventoryData                              ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		class UWBP_StorageRowListItem_C*                   UpdetaListItem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_StorageRowListItemWrap_C::OnItemClickRight__DelegateSignature(const struct FInventoryData& ItemData, class UWBP_StorageRowListItem_C* UpdetaListItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageRowListItemWrap.WBP_StorageRowListItemWrap_C.OnItemClickRight__DelegateSignature");
		
		UWBP_StorageRowListItemWrap_C_OnItemClickRight__DelegateSignature_Params params {};
		params.ItemData = ItemData;
		params.UpdetaListItem = UpdetaListItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StorageRowListItemWrap.WBP_StorageRowListItemWrap_C.OnItemClick__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInventoryData                              ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		class UWBP_StorageRowListItem_C*                   UpdetaListItem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_StorageRowListItemWrap_C::OnItemClick__DelegateSignature(const struct FInventoryData& ItemData, class UWBP_StorageRowListItem_C* UpdetaListItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StorageRowListItemWrap.WBP_StorageRowListItemWrap_C.OnItemClick__DelegateSignature");
		
		UWBP_StorageRowListItemWrap_C_OnItemClick__DelegateSignature_Params params {};
		params.ItemData = ItemData;
		params.UpdetaListItem = UpdetaListItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_StorageRowListItemWrap_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_StorageRowListItemWrap_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_StorageRowListItemWrap.WBP_StorageRowListItemWrap_C");
		return ptr;
	}

}


