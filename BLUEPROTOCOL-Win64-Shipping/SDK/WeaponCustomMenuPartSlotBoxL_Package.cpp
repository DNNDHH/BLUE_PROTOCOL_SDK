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
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.OnSetupTuningResult
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                InWeaponBefore                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FOwnItemInfo                                InWeaponAfter                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    InLockSlotNo                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWeaponCustomMenuPartSlotBoxL_C::OnSetupTuningResult(const struct FOwnItemInfo& InWeaponBefore, const struct FOwnItemInfo& InWeaponAfter, TArray<int32_t> InLockSlotNo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.OnSetupTuningResult");
		
		UWeaponCustomMenuPartSlotBoxL_C_OnSetupTuningResult_Params params {};
		params.InWeaponBefore = InWeaponBefore;
		params.InWeaponAfter = InWeaponAfter;
		params.InLockSlotNo = InLockSlotNo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.OnSetupTuning
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                InWeapon                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWeaponCustomMenuPartSlotBoxL_C::OnSetupTuning(const struct FOwnItemInfo& InWeapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.OnSetupTuning");
		
		UWeaponCustomMenuPartSlotBoxL_C_OnSetupTuning_Params params {};
		params.InWeapon = InWeapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.OnSetupRemoveResult
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                InWeapon                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            InSlotNo                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsRemove                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWeaponCustomMenuPartSlotBoxL_C::OnSetupRemoveResult(const struct FOwnItemInfo& InWeapon, int32_t InSlotNo, bool IsRemove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.OnSetupRemoveResult");
		
		UWeaponCustomMenuPartSlotBoxL_C_OnSetupRemoveResult_Params params {};
		params.InWeapon = InWeapon;
		params.InSlotNo = InSlotNo;
		params.IsRemove = IsRemove;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.OnSetupRemove
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                InWeapon                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWeaponCustomMenuPartSlotBoxL_C::OnSetupRemove(const struct FOwnItemInfo& InWeapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.OnSetupRemove");
		
		UWeaponCustomMenuPartSlotBoxL_C_OnSetupRemove_Params params {};
		params.InWeapon = InWeapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.OnSetupAddSlotResult
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                InWeapon                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWeaponCustomMenuPartSlotBoxL_C::OnSetupAddSlotResult(const struct FOwnItemInfo& InWeapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.OnSetupAddSlotResult");
		
		UWeaponCustomMenuPartSlotBoxL_C_OnSetupAddSlotResult_Params params {};
		params.InWeapon = InWeapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.OnSetupAddSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                InWeapon                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWeaponCustomMenuPartSlotBoxL_C::OnSetupAddSlot(const struct FOwnItemInfo& InWeapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.OnSetupAddSlot");
		
		UWeaponCustomMenuPartSlotBoxL_C_OnSetupAddSlot_Params params {};
		params.InWeapon = InWeapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.OnSetupSyntheResult
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                InWeapon                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            InSlotNo                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponCustomMenuPartSlotBoxL_C::OnSetupSyntheResult(const struct FOwnItemInfo& InWeapon, int32_t InSlotNo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.OnSetupSyntheResult");
		
		UWeaponCustomMenuPartSlotBoxL_C_OnSetupSyntheResult_Params params {};
		params.InWeapon = InWeapon;
		params.InSlotNo = InSlotNo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.OnSetupSynthe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                InWeapon                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FOwnItemInfo                                InFusionItem                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWeaponCustomMenuPartSlotBoxL_C::OnSetupSynthe(const struct FOwnItemInfo& InWeapon, const struct FOwnItemInfo& InFusionItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.OnSetupSynthe");
		
		UWeaponCustomMenuPartSlotBoxL_C_OnSetupSynthe_Params params {};
		params.InWeapon = InWeapon;
		params.InFusionItem = InFusionItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.OnSetup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                InWeapon                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWeaponCustomMenuPartSlotBoxL_C::OnSetup(const struct FOwnItemInfo& InWeapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.OnSetup");
		
		UWeaponCustomMenuPartSlotBoxL_C_OnSetup_Params params {};
		params.InWeapon = InWeapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.OnReset
	 * 		Flags  -> ()
	 */
	void UWeaponCustomMenuPartSlotBoxL_C::OnReset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.OnReset");
		
		UWeaponCustomMenuPartSlotBoxL_C_OnReset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.GetItemSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InItemIndex                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Slot                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponCustomMenuPartSlotBoxL_C::GetItemSlot(int32_t InItemIndex, int32_t* Slot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.GetItemSlot");
		
		UWeaponCustomMenuPartSlotBoxL_C_GetItemSlot_Params params {};
		params.InItemIndex = InItemIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Slot != nullptr)
			*Slot = params.Slot;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.SetChangeShow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bShow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            SlotNo                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponCustomMenuPartSlotBoxL_C::SetChangeShow(bool bShow, int32_t SlotNo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.SetChangeShow");
		
		UWeaponCustomMenuPartSlotBoxL_C_SetChangeShow_Params params {};
		params.bShow = bShow;
		params.SlotNo = SlotNo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.SetVisibleTopText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InVisibleText                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsVisibleInformation                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWeaponCustomMenuPartSlotBoxL_C::SetVisibleTopText(bool InVisibleText, bool IsVisibleInformation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.SetVisibleTopText");
		
		UWeaponCustomMenuPartSlotBoxL_C_SetVisibleTopText_Params params {};
		params.InVisibleText = InVisibleText;
		params.IsVisibleInformation = IsVisibleInformation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.SetVisibleTop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWeaponCustomMenuPartSlotBoxL_C::SetVisibleTop(bool InVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.SetVisibleTop");
		
		UWeaponCustomMenuPartSlotBoxL_C_SetVisibleTop_Params params {};
		params.InVisible = InVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.SetTopInformationText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBTextTableAsset*                           InTextTable                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InTextId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponCustomMenuPartSlotBoxL_C::SetTopInformationText(class USBTextTableAsset* InTextTable, int32_t InTextId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.SetTopInformationText");
		
		UWeaponCustomMenuPartSlotBoxL_C_SetTopInformationText_Params params {};
		params.InTextTable = InTextTable;
		params.InTextId = InTextId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.FindPerkData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSBCharacterWeaponPerkData>          PerkList                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            ItemId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBCharacterWeaponPerkData                  PerkData                                                   (Parm, OutParm, NoDestructor)
	 */
	void UWeaponCustomMenuPartSlotBoxL_C::FindPerkData(TArray<struct FSBCharacterWeaponPerkData>* PerkList, int32_t ItemId, struct FSBCharacterWeaponPerkData* PerkData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.FindPerkData");
		
		UWeaponCustomMenuPartSlotBoxL_C_FindPerkData_Params params {};
		params.ItemId = ItemId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PerkList != nullptr)
			*PerkList = params.PerkList;
		if (PerkData != nullptr)
			*PerkData = params.PerkData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.GetPerkData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSBCharacterWeaponPerkData>          PerkList                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSBCharacterWeaponPerkData                  PerkData                                                   (Parm, OutParm, NoDestructor)
	 */
	void UWeaponCustomMenuPartSlotBoxL_C::GetPerkData(TArray<struct FSBCharacterWeaponPerkData>* PerkList, int32_t Index, bool* Result, struct FSBCharacterWeaponPerkData* PerkData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.GetPerkData");
		
		UWeaponCustomMenuPartSlotBoxL_C_GetPerkData_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PerkList != nullptr)
			*PerkList = params.PerkList;
		if (Result != nullptr)
			*Result = params.Result;
		if (PerkData != nullptr)
			*PerkData = params.PerkData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.IsPerkSlotSelect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWeaponCustomMenuPartSlotBoxL_C::IsPerkSlotSelect(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.IsPerkSlotSelect");
		
		UWeaponCustomMenuPartSlotBoxL_C_IsPerkSlotSelect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.IsPerkSlotLockAll
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWeaponCustomMenuPartSlotBoxL_C::IsPerkSlotLockAll(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.IsPerkSlotLockAll");
		
		UWeaponCustomMenuPartSlotBoxL_C_IsPerkSlotLockAll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.IsPerkSlotLock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWeaponCustomMenuPartSlotBoxL_C::IsPerkSlotLock(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.IsPerkSlotLock");
		
		UWeaponCustomMenuPartSlotBoxL_C_IsPerkSlotLock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.GetPerkSlotLockList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    LockList                                                   (Parm, OutParm)
	 */
	void UWeaponCustomMenuPartSlotBoxL_C::GetPerkSlotLockList(TArray<int32_t>* LockList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.GetPerkSlotLockList");
		
		UWeaponCustomMenuPartSlotBoxL_C_GetPerkSlotLockList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LockList != nullptr)
			*LockList = params.LockList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.GetPerkSlotList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UWeaponCustomMenuPartSlotBoxItem_C*>  PerkSlotList                                               (Parm, OutParm, ContainsInstancedReference)
	 */
	void UWeaponCustomMenuPartSlotBoxL_C::GetPerkSlotList(TArray<class UWeaponCustomMenuPartSlotBoxItem_C*>* PerkSlotList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.GetPerkSlotList");
		
		UWeaponCustomMenuPartSlotBoxL_C_GetPerkSlotList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PerkSlotList != nullptr)
			*PerkSlotList = params.PerkSlotList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.GetPerkSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWeaponCustomMenuPartSlotBoxItem_C*          PerkSlot                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponCustomMenuPartSlotBoxL_C::GetPerkSlot(int32_t Index, class UWeaponCustomMenuPartSlotBoxItem_C** PerkSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.GetPerkSlot");
		
		UWeaponCustomMenuPartSlotBoxL_C_GetPerkSlot_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PerkSlot != nullptr)
			*PerkSlot = params.PerkSlot;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.ClickPerkSlotLock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsLock                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWeaponCustomMenuPartSlotBoxL_C::ClickPerkSlotLock(int32_t Index, bool IsLock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.ClickPerkSlotLock");
		
		UWeaponCustomMenuPartSlotBoxL_C_ClickPerkSlotLock_Params params {};
		params.Index = Index;
		params.IsLock = IsLock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.SetupPerkSlotSelectButton
	 * 		Flags  -> ()
	 */
	void UWeaponCustomMenuPartSlotBoxL_C::SetupPerkSlotSelectButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.SetupPerkSlotSelectButton");
		
		UWeaponCustomMenuPartSlotBoxL_C_SetupPerkSlotSelectButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.ResetPerkSlotSelect
	 * 		Flags  -> ()
	 */
	void UWeaponCustomMenuPartSlotBoxL_C::ResetPerkSlotSelect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.ResetPerkSlotSelect");
		
		UWeaponCustomMenuPartSlotBoxL_C_ResetPerkSlotSelect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.SetPerkSlotSelect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponCustomMenuPartSlotBoxL_C::SetPerkSlotSelect(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.SetPerkSlotSelect");
		
		UWeaponCustomMenuPartSlotBoxL_C_SetPerkSlotSelect_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.SetPerkSlotVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWeaponCustomMenuPartSlotBoxItem_C*          SlotItem                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWeaponCustomMenuPartSlotBoxL_C::SetPerkSlotVisible(class UWeaponCustomMenuPartSlotBoxItem_C* SlotItem, bool InVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.SetPerkSlotVisible");
		
		UWeaponCustomMenuPartSlotBoxL_C_SetPerkSlotVisible_Params params {};
		params.SlotItem = SlotItem;
		params.InVisible = InVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.OnPreConstruct
	 * 		Flags  -> ()
	 */
	void UWeaponCustomMenuPartSlotBoxL_C::OnPreConstruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.OnPreConstruct");
		
		UWeaponCustomMenuPartSlotBoxL_C_OnPreConstruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWeaponCustomMenuPartSlotBoxL_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.PreConstruct");
		
		UWeaponCustomMenuPartSlotBoxL_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.Construct
	 * 		Flags  -> ()
	 */
	void UWeaponCustomMenuPartSlotBoxL_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.Construct");
		
		UWeaponCustomMenuPartSlotBoxL_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot1_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWeaponCustomMenuPartSlotBoxL_C::BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot1_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot1_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");
		
		UWeaponCustomMenuPartSlotBoxL_C_BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot1_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot2_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWeaponCustomMenuPartSlotBoxL_C::BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot2_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot2_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature");
		
		UWeaponCustomMenuPartSlotBoxL_C_BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot2_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot3_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWeaponCustomMenuPartSlotBoxL_C::BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot3_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot3_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature");
		
		UWeaponCustomMenuPartSlotBoxL_C_BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot3_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot4_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWeaponCustomMenuPartSlotBoxL_C::BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot4_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot4_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature");
		
		UWeaponCustomMenuPartSlotBoxL_C_BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot4_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot1_K2Node_ComponentBoundEvent_0_OnClickedLock__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsLock                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWeaponCustomMenuPartSlotBoxL_C::BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot1_K2Node_ComponentBoundEvent_0_OnClickedLock__DelegateSignature(bool IsLock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot1_K2Node_ComponentBoundEvent_0_OnClickedLock__DelegateSignature");
		
		UWeaponCustomMenuPartSlotBoxL_C_BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot1_K2Node_ComponentBoundEvent_0_OnClickedLock__DelegateSignature_Params params {};
		params.IsLock = IsLock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot2_K2Node_ComponentBoundEvent_1_OnClickedLock__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsLock                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWeaponCustomMenuPartSlotBoxL_C::BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot2_K2Node_ComponentBoundEvent_1_OnClickedLock__DelegateSignature(bool IsLock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot2_K2Node_ComponentBoundEvent_1_OnClickedLock__DelegateSignature");
		
		UWeaponCustomMenuPartSlotBoxL_C_BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot2_K2Node_ComponentBoundEvent_1_OnClickedLock__DelegateSignature_Params params {};
		params.IsLock = IsLock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot3_K2Node_ComponentBoundEvent_2_OnClickedLock__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsLock                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWeaponCustomMenuPartSlotBoxL_C::BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot3_K2Node_ComponentBoundEvent_2_OnClickedLock__DelegateSignature(bool IsLock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot3_K2Node_ComponentBoundEvent_2_OnClickedLock__DelegateSignature");
		
		UWeaponCustomMenuPartSlotBoxL_C_BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot3_K2Node_ComponentBoundEvent_2_OnClickedLock__DelegateSignature_Params params {};
		params.IsLock = IsLock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot4_K2Node_ComponentBoundEvent_3_OnClickedLock__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsLock                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWeaponCustomMenuPartSlotBoxL_C::BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot4_K2Node_ComponentBoundEvent_3_OnClickedLock__DelegateSignature(bool IsLock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot4_K2Node_ComponentBoundEvent_3_OnClickedLock__DelegateSignature");
		
		UWeaponCustomMenuPartSlotBoxL_C_BndEvt__WeaponSynthePart_PerkSlotBox_PerkSlot4_K2Node_ComponentBoundEvent_3_OnClickedLock__DelegateSignature_Params params {};
		params.IsLock = IsLock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.ExecuteUbergraph_WeaponCustomMenuPartSlotBoxL
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponCustomMenuPartSlotBoxL_C::ExecuteUbergraph_WeaponCustomMenuPartSlotBoxL(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.ExecuteUbergraph_WeaponCustomMenuPartSlotBoxL");
		
		UWeaponCustomMenuPartSlotBoxL_C_ExecuteUbergraph_WeaponCustomMenuPartSlotBoxL_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.OnClickedPerkSlot__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SlotNo                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponCustomMenuPartSlotBoxL_C::OnClickedPerkSlot__DelegateSignature(int32_t SlotNo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.OnClickedPerkSlot__DelegateSignature");
		
		UWeaponCustomMenuPartSlotBoxL_C_OnClickedPerkSlot__DelegateSignature_Params params {};
		params.SlotNo = SlotNo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.OnProtectNumChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ProtectNum                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponCustomMenuPartSlotBoxL_C::OnProtectNumChanged__DelegateSignature(int32_t ProtectNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C.OnProtectNumChanged__DelegateSignature");
		
		UWeaponCustomMenuPartSlotBoxL_C_OnProtectNumChanged__DelegateSignature_Params params {};
		params.ProtectNum = ProtectNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeaponCustomMenuPartSlotBoxL_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponCustomMenuPartSlotBoxL_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WeaponCustomMenuPartSlotBoxL.WeaponCustomMenuPartSlotBoxL_C");
		return ptr;
	}

}


