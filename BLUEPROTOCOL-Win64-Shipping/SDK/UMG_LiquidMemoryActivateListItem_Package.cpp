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
	 * 		Name   -> Function UMG_LiquidMemoryActivateListItem.UMG_LiquidMemoryActivateListItem_C.UpdateBottleStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InLiquidMemoryId                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_LiquidMemoryActivateListItem_C::UpdateBottleStatus(int32_t InLiquidMemoryId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryActivateListItem.UMG_LiquidMemoryActivateListItem_C.UpdateBottleStatus");
		
		UUMG_LiquidMemoryActivateListItem_C_UpdateBottleStatus_Params params {};
		params.InLiquidMemoryId = InLiquidMemoryId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryActivateListItem.UMG_LiquidMemoryActivateListItem_C.SetLiquidMemoryInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Level                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_LiquidMemoryActivateListItem_C::SetLiquidMemoryInfo(int32_t ID, int32_t Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryActivateListItem.UMG_LiquidMemoryActivateListItem_C.SetLiquidMemoryInfo");
		
		UUMG_LiquidMemoryActivateListItem_C_SetLiquidMemoryInfo_Params params {};
		params.ID = ID;
		params.Level = Level;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryActivateListItem.UMG_LiquidMemoryActivateListItem_C.Construct
	 * 		Flags  -> ()
	 */
	void UUMG_LiquidMemoryActivateListItem_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryActivateListItem.UMG_LiquidMemoryActivateListItem_C.Construct");
		
		UUMG_LiquidMemoryActivateListItem_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryActivateListItem.UMG_LiquidMemoryActivateListItem_C.ExecuteUbergraph_UMG_LiquidMemoryActivateListItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_LiquidMemoryActivateListItem_C::ExecuteUbergraph_UMG_LiquidMemoryActivateListItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryActivateListItem.UMG_LiquidMemoryActivateListItem_C.ExecuteUbergraph_UMG_LiquidMemoryActivateListItem");
		
		UUMG_LiquidMemoryActivateListItem_C_ExecuteUbergraph_UMG_LiquidMemoryActivateListItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryActivateListItem.UMG_LiquidMemoryActivateListItem_C.OnPopupTokenList__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            LiquidMemoryId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsFullCharge                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_LiquidMemoryActivateListItem_C::OnPopupTokenList__DelegateSignature(int32_t LiquidMemoryId, bool IsFullCharge)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryActivateListItem.UMG_LiquidMemoryActivateListItem_C.OnPopupTokenList__DelegateSignature");
		
		UUMG_LiquidMemoryActivateListItem_C_OnPopupTokenList__DelegateSignature_Params params {};
		params.LiquidMemoryId = LiquidMemoryId;
		params.IsFullCharge = IsFullCharge;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryActivateListItem.UMG_LiquidMemoryActivateListItem_C.OnOveredAddNumMax__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_LiquidMemoryActivateListItem_C::OnOveredAddNumMax__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryActivateListItem.UMG_LiquidMemoryActivateListItem_C.OnOveredAddNumMax__DelegateSignature");
		
		UUMG_LiquidMemoryActivateListItem_C_OnOveredAddNumMax__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryActivateListItem.UMG_LiquidMemoryActivateListItem_C.OnSub__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUMG_LiquidMemoryProductListItem_C*          InItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_LiquidMemoryActivateListItem_C::OnSub__DelegateSignature(class UUMG_LiquidMemoryProductListItem_C* InItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryActivateListItem.UMG_LiquidMemoryActivateListItem_C.OnSub__DelegateSignature");
		
		UUMG_LiquidMemoryActivateListItem_C_OnSub__DelegateSignature_Params params {};
		params.InItem = InItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryActivateListItem.UMG_LiquidMemoryActivateListItem_C.OnAdd__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUMG_LiquidMemoryProductListItem_C*          InItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_LiquidMemoryActivateListItem_C::OnAdd__DelegateSignature(class UUMG_LiquidMemoryProductListItem_C* InItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryActivateListItem.UMG_LiquidMemoryActivateListItem_C.OnAdd__DelegateSignature");
		
		UUMG_LiquidMemoryActivateListItem_C_OnAdd__DelegateSignature_Params params {};
		params.InItem = InItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryActivateListItem.UMG_LiquidMemoryActivateListItem_C.OnBtnSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUMG_LiquidMemoryProductListItem_C*          InItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_LiquidMemoryActivateListItem_C::OnBtnSelected__DelegateSignature(class UUMG_LiquidMemoryProductListItem_C* InItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryActivateListItem.UMG_LiquidMemoryActivateListItem_C.OnBtnSelected__DelegateSignature");
		
		UUMG_LiquidMemoryActivateListItem_C_OnBtnSelected__DelegateSignature_Params params {};
		params.InItem = InItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryActivateListItem.UMG_LiquidMemoryActivateListItem_C.OnBtnUnhovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUMG_LiquidMemoryProductListItem_C*          InItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_LiquidMemoryActivateListItem_C::OnBtnUnhovered__DelegateSignature(class UUMG_LiquidMemoryProductListItem_C* InItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryActivateListItem.UMG_LiquidMemoryActivateListItem_C.OnBtnUnhovered__DelegateSignature");
		
		UUMG_LiquidMemoryActivateListItem_C_OnBtnUnhovered__DelegateSignature_Params params {};
		params.InItem = InItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryActivateListItem.UMG_LiquidMemoryActivateListItem_C.OnBtnHovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUMG_LiquidMemoryProductListItem_C*          InItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_LiquidMemoryActivateListItem_C::OnBtnHovered__DelegateSignature(class UUMG_LiquidMemoryProductListItem_C* InItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryActivateListItem.UMG_LiquidMemoryActivateListItem_C.OnBtnHovered__DelegateSignature");
		
		UUMG_LiquidMemoryActivateListItem_C_OnBtnHovered__DelegateSignature_Params params {};
		params.InItem = InItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMG_LiquidMemoryActivateListItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMG_LiquidMemoryActivateListItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_LiquidMemoryActivateListItem.UMG_LiquidMemoryActivateListItem_C");
		return ptr;
	}

}


