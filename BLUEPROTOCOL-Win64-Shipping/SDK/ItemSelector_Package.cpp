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
	 * 		Name   -> Function ItemSelector.ItemSelector_C.OnUseItem
	 * 		Flags  -> ()
	 */
	void UItemSelector_C::OnUseItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemSelector.ItemSelector_C.OnUseItem");
		
		UItemSelector_C_OnUseItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemSelector.ItemSelector_C.IsRegistItemForInventoryData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                InItemInfo                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	bool UItemSelector_C::IsRegistItemForInventoryData(const struct FOwnItemInfo& InItemInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemSelector.ItemSelector_C.IsRegistItemForInventoryData");
		
		UItemSelector_C_IsRegistItemForInventoryData_Params params {};
		params.InItemInfo = InItemInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemSelector.ItemSelector_C.OnPlaySECanNotUse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBItemUseStatus                                   InUseStatus                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UItemSelector_C::OnPlaySECanNotUse(ESBItemUseStatus InUseStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemSelector.ItemSelector_C.OnPlaySECanNotUse");
		
		UItemSelector_C_OnPlaySECanNotUse_Params params {};
		params.InUseStatus = InUseStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemSelector.ItemSelector_C.OnPlaySESelect
	 * 		Flags  -> ()
	 */
	void UItemSelector_C::OnPlaySESelect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemSelector.ItemSelector_C.OnPlaySESelect");
		
		UItemSelector_C_OnPlaySESelect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemSelector.ItemSelector_C.SetupKeyTextRight
	 * 		Flags  -> ()
	 */
	void UItemSelector_C::SetupKeyTextRight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemSelector.ItemSelector_C.SetupKeyTextRight");
		
		UItemSelector_C_SetupKeyTextRight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemSelector.ItemSelector_C.SetupKeyTextLeft
	 * 		Flags  -> ()
	 */
	void UItemSelector_C::SetupKeyTextLeft()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemSelector.ItemSelector_C.SetupKeyTextLeft");
		
		UItemSelector_C_SetupKeyTextLeft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemSelector.ItemSelector_C.SetupKeyTextUse
	 * 		Flags  -> ()
	 */
	void UItemSelector_C::SetupKeyTextUse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemSelector.ItemSelector_C.SetupKeyTextUse");
		
		UItemSelector_C_SetupKeyTextUse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemSelector.ItemSelector_C.OnHiddenCoolTime
	 * 		Flags  -> ()
	 */
	void UItemSelector_C::OnHiddenCoolTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemSelector.ItemSelector_C.OnHiddenCoolTime");
		
		UItemSelector_C_OnHiddenCoolTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemSelector.ItemSelector_C.OnShowCoolTime
	 * 		Flags  -> ()
	 */
	void UItemSelector_C::OnShowCoolTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemSelector.ItemSelector_C.OnShowCoolTime");
		
		UItemSelector_C_OnShowCoolTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemSelector.ItemSelector_C.OnTerminate
	 * 		Flags  -> ()
	 */
	void UItemSelector_C::OnTerminate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemSelector.ItemSelector_C.OnTerminate");
		
		UItemSelector_C_OnTerminate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemSelector.ItemSelector_C.OnInitialize
	 * 		Flags  -> ()
	 */
	void UItemSelector_C::OnInitialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemSelector.ItemSelector_C.OnInitialize");
		
		UItemSelector_C_OnInitialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemSelector.ItemSelector_C.OnUnbind
	 * 		Flags  -> ()
	 */
	void UItemSelector_C::OnUnbind()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemSelector.ItemSelector_C.OnUnbind");
		
		UItemSelector_C_OnUnbind_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemSelector.ItemSelector_C.OnBind
	 * 		Flags  -> ()
	 */
	void UItemSelector_C::OnBind()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemSelector.ItemSelector_C.OnBind");
		
		UItemSelector_C_OnBind_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemSelector.ItemSelector_C.DebugPrint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InStr                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UItemSelector_C::DebugPrint(const class FString& InStr, float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemSelector.ItemSelector_C.DebugPrint");
		
		UItemSelector_C_DebugPrint_Params params {};
		params.InStr = InStr;
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemSelector.ItemSelector_C.OnSaveItemLock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FSBLockItemData>                     LockItemData                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            InRetCode                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UItemSelector_C::OnSaveItemLock(bool Result, TArray<struct FSBLockItemData> LockItemData, int32_t InRetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemSelector.ItemSelector_C.OnSaveItemLock");
		
		UItemSelector_C_OnSaveItemLock_Params params {};
		params.Result = Result;
		params.LockItemData = LockItemData;
		params.InRetCode = InRetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemSelector.ItemSelector_C.BindSaveItemLock
	 * 		Flags  -> ()
	 */
	void UItemSelector_C::BindSaveItemLock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemSelector.ItemSelector_C.BindSaveItemLock");
		
		UItemSelector_C_BindSaveItemLock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemSelector.ItemSelector_C.UnbindSaveItemLock
	 * 		Flags  -> ()
	 */
	void UItemSelector_C::UnbindSaveItemLock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemSelector.ItemSelector_C.UnbindSaveItemLock");
		
		UItemSelector_C_UnbindSaveItemLock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemSelector.ItemSelector_C.BindSaveItemStorage
	 * 		Flags  -> ()
	 */
	void UItemSelector_C::BindSaveItemStorage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemSelector.ItemSelector_C.BindSaveItemStorage");
		
		UItemSelector_C_BindSaveItemStorage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemSelector.ItemSelector_C.UnbindSaveItemStorage
	 * 		Flags  -> ()
	 */
	void UItemSelector_C::UnbindSaveItemStorage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemSelector.ItemSelector_C.UnbindSaveItemStorage");
		
		UItemSelector_C_UnbindSaveItemStorage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemSelector.ItemSelector_C.OnSaveItemStorage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InRetCode                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FOwnItemInfo>                        InDirtyItems                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UItemSelector_C::OnSaveItemStorage(int32_t InRetCode, TArray<struct FOwnItemInfo> InDirtyItems)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemSelector.ItemSelector_C.OnSaveItemStorage");
		
		UItemSelector_C_OnSaveItemStorage_Params params {};
		params.InRetCode = InRetCode;
		params.InDirtyItems = InDirtyItems;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemSelector.ItemSelector_C.OnOwnItemChangeAmount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBChangeItemAmountParam                    InParam                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UItemSelector_C::OnOwnItemChangeAmount(const struct FSBChangeItemAmountParam& InParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemSelector.ItemSelector_C.OnOwnItemChangeAmount");
		
		UItemSelector_C_OnOwnItemChangeAmount_Params params {};
		params.InParam = InParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemSelector.ItemSelector_C.BindOwnItemChangeAmount
	 * 		Flags  -> ()
	 */
	void UItemSelector_C::BindOwnItemChangeAmount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemSelector.ItemSelector_C.BindOwnItemChangeAmount");
		
		UItemSelector_C_BindOwnItemChangeAmount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemSelector.ItemSelector_C.UnbindOwnItemChangeAmount
	 * 		Flags  -> ()
	 */
	void UItemSelector_C::UnbindOwnItemChangeAmount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemSelector.ItemSelector_C.UnbindOwnItemChangeAmount");
		
		UItemSelector_C_UnbindOwnItemChangeAmount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemSelector.ItemSelector_C.EventOnUseSupply
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UItemSelector_C::EventOnUseSupply(bool Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemSelector.ItemSelector_C.EventOnUseSupply");
		
		UItemSelector_C_EventOnUseSupply_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemSelector.ItemSelector_C.BindUseSupply
	 * 		Flags  -> ()
	 */
	void UItemSelector_C::BindUseSupply()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemSelector.ItemSelector_C.BindUseSupply");
		
		UItemSelector_C_BindUseSupply_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemSelector.ItemSelector_C.UnbindUseSupply
	 * 		Flags  -> ()
	 */
	void UItemSelector_C::UnbindUseSupply()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemSelector.ItemSelector_C.UnbindUseSupply");
		
		UItemSelector_C_UnbindUseSupply_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemSelector.ItemSelector_C.BindClassLevelUp
	 * 		Flags  -> ()
	 */
	void UItemSelector_C::BindClassLevelUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemSelector.ItemSelector_C.BindClassLevelUp");
		
		UItemSelector_C_BindClassLevelUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemSelector.ItemSelector_C.UnbindClassLevelUp
	 * 		Flags  -> ()
	 */
	void UItemSelector_C::UnbindClassLevelUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemSelector.ItemSelector_C.UnbindClassLevelUp");
		
		UItemSelector_C_UnbindClassLevelUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemSelector.ItemSelector_C.CustomEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UItemSelector_C::CustomEvent_2(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemSelector.ItemSelector_C.CustomEvent_2");
		
		UItemSelector_C_CustomEvent_2_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemSelector.ItemSelector_C.BindPlayerClassChange
	 * 		Flags  -> ()
	 */
	void UItemSelector_C::BindPlayerClassChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemSelector.ItemSelector_C.BindPlayerClassChange");
		
		UItemSelector_C_BindPlayerClassChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemSelector.ItemSelector_C.UnbindPlayerClassChange
	 * 		Flags  -> ()
	 */
	void UItemSelector_C::UnbindPlayerClassChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemSelector.ItemSelector_C.UnbindPlayerClassChange");
		
		UItemSelector_C_UnbindPlayerClassChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemSelector.ItemSelector_C.CustomEvent_4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UItemSelector_C::CustomEvent_4(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemSelector.ItemSelector_C.CustomEvent_4");
		
		UItemSelector_C_CustomEvent_4_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemSelector.ItemSelector_C.BindUpdateShortcut
	 * 		Flags  -> ()
	 */
	void UItemSelector_C::BindUpdateShortcut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemSelector.ItemSelector_C.BindUpdateShortcut");
		
		UItemSelector_C_BindUpdateShortcut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemSelector.ItemSelector_C.UnbindUpdateShortcut
	 * 		Flags  -> ()
	 */
	void UItemSelector_C::UnbindUpdateShortcut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemSelector.ItemSelector_C.UnbindUpdateShortcut");
		
		UItemSelector_C_UnbindUpdateShortcut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemSelector.ItemSelector_C.CustomEvent_5
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UItemSelector_C::CustomEvent_5(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemSelector.ItemSelector_C.CustomEvent_5");
		
		UItemSelector_C_CustomEvent_5_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemSelector.ItemSelector_C.BndEvt__ItemSelector_TextLeft_K2Node_ComponentBoundEvent_0_OnUpdateOperationMode__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UItemSelector_C::BndEvt__ItemSelector_TextLeft_K2Node_ComponentBoundEvent_0_OnUpdateOperationMode__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemSelector.ItemSelector_C.BndEvt__ItemSelector_TextLeft_K2Node_ComponentBoundEvent_0_OnUpdateOperationMode__DelegateSignature");
		
		UItemSelector_C_BndEvt__ItemSelector_TextLeft_K2Node_ComponentBoundEvent_0_OnUpdateOperationMode__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemSelector.ItemSelector_C.BndEvt__ItemSelector_TextLeft_K2Node_ComponentBoundEvent_1_OnChangePadSkinType__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UItemSelector_C::BndEvt__ItemSelector_TextLeft_K2Node_ComponentBoundEvent_1_OnChangePadSkinType__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemSelector.ItemSelector_C.BndEvt__ItemSelector_TextLeft_K2Node_ComponentBoundEvent_1_OnChangePadSkinType__DelegateSignature");
		
		UItemSelector_C_BndEvt__ItemSelector_TextLeft_K2Node_ComponentBoundEvent_1_OnChangePadSkinType__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemSelector.ItemSelector_C.BndEvt__ItemSelector_TextLeft_K2Node_ComponentBoundEvent_2_OnUpdateKeyConfig__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UItemSelector_C::BndEvt__ItemSelector_TextLeft_K2Node_ComponentBoundEvent_2_OnUpdateKeyConfig__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemSelector.ItemSelector_C.BndEvt__ItemSelector_TextLeft_K2Node_ComponentBoundEvent_2_OnUpdateKeyConfig__DelegateSignature");
		
		UItemSelector_C_BndEvt__ItemSelector_TextLeft_K2Node_ComponentBoundEvent_2_OnUpdateKeyConfig__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemSelector.ItemSelector_C.BndEvt__ItemSelector_TextRight_K2Node_ComponentBoundEvent_3_OnUpdateOperationMode__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UItemSelector_C::BndEvt__ItemSelector_TextRight_K2Node_ComponentBoundEvent_3_OnUpdateOperationMode__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemSelector.ItemSelector_C.BndEvt__ItemSelector_TextRight_K2Node_ComponentBoundEvent_3_OnUpdateOperationMode__DelegateSignature");
		
		UItemSelector_C_BndEvt__ItemSelector_TextRight_K2Node_ComponentBoundEvent_3_OnUpdateOperationMode__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemSelector.ItemSelector_C.BndEvt__ItemSelector_TextRight_K2Node_ComponentBoundEvent_4_OnChangePadSkinType__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UItemSelector_C::BndEvt__ItemSelector_TextRight_K2Node_ComponentBoundEvent_4_OnChangePadSkinType__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemSelector.ItemSelector_C.BndEvt__ItemSelector_TextRight_K2Node_ComponentBoundEvent_4_OnChangePadSkinType__DelegateSignature");
		
		UItemSelector_C_BndEvt__ItemSelector_TextRight_K2Node_ComponentBoundEvent_4_OnChangePadSkinType__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemSelector.ItemSelector_C.BndEvt__ItemSelector_TextRight_K2Node_ComponentBoundEvent_5_OnUpdateKeyConfig__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UItemSelector_C::BndEvt__ItemSelector_TextRight_K2Node_ComponentBoundEvent_5_OnUpdateKeyConfig__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemSelector.ItemSelector_C.BndEvt__ItemSelector_TextRight_K2Node_ComponentBoundEvent_5_OnUpdateKeyConfig__DelegateSignature");
		
		UItemSelector_C_BndEvt__ItemSelector_TextRight_K2Node_ComponentBoundEvent_5_OnUpdateKeyConfig__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemSelector.ItemSelector_C.BndEvt__ItemSelector_TextUse_K2Node_ComponentBoundEvent_6_OnUpdateOperationMode__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UItemSelector_C::BndEvt__ItemSelector_TextUse_K2Node_ComponentBoundEvent_6_OnUpdateOperationMode__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemSelector.ItemSelector_C.BndEvt__ItemSelector_TextUse_K2Node_ComponentBoundEvent_6_OnUpdateOperationMode__DelegateSignature");
		
		UItemSelector_C_BndEvt__ItemSelector_TextUse_K2Node_ComponentBoundEvent_6_OnUpdateOperationMode__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemSelector.ItemSelector_C.BndEvt__ItemSelector_TextUse_K2Node_ComponentBoundEvent_7_OnChangePadSkinType__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UItemSelector_C::BndEvt__ItemSelector_TextUse_K2Node_ComponentBoundEvent_7_OnChangePadSkinType__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemSelector.ItemSelector_C.BndEvt__ItemSelector_TextUse_K2Node_ComponentBoundEvent_7_OnChangePadSkinType__DelegateSignature");
		
		UItemSelector_C_BndEvt__ItemSelector_TextUse_K2Node_ComponentBoundEvent_7_OnChangePadSkinType__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemSelector.ItemSelector_C.BndEvt__ItemSelector_TextUse_K2Node_ComponentBoundEvent_8_OnUpdateKeyConfig__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UItemSelector_C::BndEvt__ItemSelector_TextUse_K2Node_ComponentBoundEvent_8_OnUpdateKeyConfig__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemSelector.ItemSelector_C.BndEvt__ItemSelector_TextUse_K2Node_ComponentBoundEvent_8_OnUpdateKeyConfig__DelegateSignature");
		
		UItemSelector_C_BndEvt__ItemSelector_TextUse_K2Node_ComponentBoundEvent_8_OnUpdateKeyConfig__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemSelector.ItemSelector_C.BindEndCoolTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UShortcutCoolTime_C*                         CoolTimeWidget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UItemSelector_C::BindEndCoolTime(class UShortcutCoolTime_C* CoolTimeWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemSelector.ItemSelector_C.BindEndCoolTime");
		
		UItemSelector_C_BindEndCoolTime_Params params {};
		params.CoolTimeWidget = CoolTimeWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemSelector.ItemSelector_C.UnbindEndCoolTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UShortcutCoolTime_C*                         CoolTimeWidget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UItemSelector_C::UnbindEndCoolTime(class UShortcutCoolTime_C* CoolTimeWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemSelector.ItemSelector_C.UnbindEndCoolTime");
		
		UItemSelector_C_UnbindEndCoolTime_Params params {};
		params.CoolTimeWidget = CoolTimeWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemSelector.ItemSelector_C.EventSetupList
	 * 		Flags  -> ()
	 */
	void UItemSelector_C::EventSetupList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemSelector.ItemSelector_C.EventSetupList");
		
		UItemSelector_C_EventSetupList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemSelector.ItemSelector_C.ExecuteUbergraph_ItemSelector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UItemSelector_C::ExecuteUbergraph_ItemSelector(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemSelector.ItemSelector_C.ExecuteUbergraph_ItemSelector");
		
		UItemSelector_C_ExecuteUbergraph_ItemSelector_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UItemSelector_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UItemSelector_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ItemSelector.ItemSelector_C");
		return ptr;
	}

}


