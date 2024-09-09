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
	 * 		Name   -> Function InventoryTag.InventoryTag_C.SetVisibleInfoIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInventoryTag_C::SetVisibleInfoIcon(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryTag.InventoryTag_C.SetVisibleInfoIcon");
		
		UInventoryTag_C_SetVisibleInfoIcon_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryTag.InventoryTag_C.Set Lottery Groups Id
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InLotteryGroupsId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventoryTag_C::SetLotteryGroupsId(int32_t InLotteryGroupsId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryTag.InventoryTag_C.Set Lottery Groups Id");
		
		UInventoryTag_C_SetLotteryGroupsId_Params params {};
		params.InLotteryGroupsId = InLotteryGroupsId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryTag.InventoryTag_C.Update Own Item Info by Storage Number
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InStorageNumber                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      InUniqueId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		EItemType                                          InItemType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventoryTag_C::UpdateOwnItemInfobyStorageNumber(int32_t InStorageNumber, const class FString& InUniqueId, EItemType InItemType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryTag.InventoryTag_C.Update Own Item Info by Storage Number");
		
		UInventoryTag_C_UpdateOwnItemInfobyStorageNumber_Params params {};
		params.InStorageNumber = InStorageNumber;
		params.InUniqueId = InUniqueId;
		params.InItemType = InItemType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryTag.InventoryTag_C.SetRecipiId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InRecipiId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventoryTag_C::SetRecipiId(int32_t InRecipiId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryTag.InventoryTag_C.SetRecipiId");
		
		UInventoryTag_C_SetRecipiId_Params params {};
		params.InRecipiId = InRecipiId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryTag.InventoryTag_C.InitOwnItemInfos
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                NewOwnItemInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UInventoryTag_C::InitOwnItemInfos(const struct FOwnItemInfo& NewOwnItemInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryTag.InventoryTag_C.InitOwnItemInfos");
		
		UInventoryTag_C_InitOwnItemInfos_Params params {};
		params.NewOwnItemInfo = NewOwnItemInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryTag.InventoryTag_C.UpdateWeaponStackBMaxToolTip
	 * 		Flags  -> ()
	 */
	void UInventoryTag_C::UpdateWeaponStackBMaxToolTip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryTag.InventoryTag_C.UpdateWeaponStackBMaxToolTip");
		
		UInventoryTag_C_UpdateWeaponStackBMaxToolTip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryTag.InventoryTag_C.UpdateImagineStackBMaxToolTip
	 * 		Flags  -> ()
	 */
	void UInventoryTag_C::UpdateImagineStackBMaxToolTip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryTag.InventoryTag_C.UpdateImagineStackBMaxToolTip");
		
		UInventoryTag_C_UpdateImagineStackBMaxToolTip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryTag.InventoryTag_C.GetToolTipWidget_1
	 * 		Flags  -> ()
	 */
	class UWidget* UInventoryTag_C::GetToolTipWidget_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryTag.InventoryTag_C.GetToolTipWidget_1");
		
		UInventoryTag_C_GetToolTipWidget_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryTag.InventoryTag_C.CreateToolTipWidgetifNeeded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 OutTooltip                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventoryTag_C::CreateToolTipWidgetifNeeded(class UUserWidget** OutTooltip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryTag.InventoryTag_C.CreateToolTipWidgetifNeeded");
		
		UInventoryTag_C_CreateToolTipWidgetifNeeded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutTooltip != nullptr)
			*OutTooltip = params.OutTooltip;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryTag.InventoryTag_C.SetStackBMaxToolTipCreateInfos
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EToolTipType                                       ToolTipType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventoryTag_C::SetStackBMaxToolTipCreateInfos(int32_t ItemId, EToolTipType ToolTipType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryTag.InventoryTag_C.SetStackBMaxToolTipCreateInfos");
		
		UInventoryTag_C_SetStackBMaxToolTipCreateInfos_Params params {};
		params.ItemId = ItemId;
		params.ToolTipType = ToolTipType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryTag.InventoryTag_C.Set Stack BMax Visible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bStackBEnable                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInventoryTag_C::SetStackBMaxVisible(bool bStackBEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryTag.InventoryTag_C.Set Stack BMax Visible");
		
		UInventoryTag_C_SetStackBMaxVisible_Params params {};
		params.bStackBEnable = bStackBEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryTag.InventoryTag_C.SetOwnItemInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                Info                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UInventoryTag_C::SetOwnItemInfo(const struct FOwnItemInfo& Info)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryTag.InventoryTag_C.SetOwnItemInfo");
		
		UInventoryTag_C_SetOwnItemInfo_Params params {};
		params.Info = Info;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryTag.InventoryTag_C.SetStackBMaxValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventoryTag_C::SetStackBMaxValue(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryTag.InventoryTag_C.SetStackBMaxValue");
		
		UInventoryTag_C_SetStackBMaxValue_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryTag.InventoryTag_C.SetStackBMax
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      StackBId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UInventoryTag_C::SetStackBMax(const class FString& StackBId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryTag.InventoryTag_C.SetStackBMax");
		
		UInventoryTag_C_SetStackBMax_Params params {};
		params.StackBId = StackBId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryTag.InventoryTag_C.SetInventoryItemData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInventoryItemData                          InventoryItemData                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UInventoryTag_C::SetInventoryItemData(const struct FInventoryItemData& InventoryItemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryTag.InventoryTag_C.SetInventoryItemData");
		
		UInventoryTag_C_SetInventoryItemData_Params params {};
		params.InventoryItemData = InventoryItemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryTag.InventoryTag_C.SetMasterOrnament
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterOrnament                           Master                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               Used                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsBppIrredeemable                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInventoryTag_C::SetMasterOrnament(const struct FSBMasterOrnament& Master, bool Used, bool IsBppIrredeemable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryTag.InventoryTag_C.SetMasterOrnament");
		
		UInventoryTag_C_SetMasterOrnament_Params params {};
		params.Master = Master;
		params.Used = Used;
		params.IsBppIrredeemable = IsBppIrredeemable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryTag.InventoryTag_C.SetMasterMountImagine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterMountImagine                       MasterMountImagine                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               Used                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsBppIrredeemable                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInventoryTag_C::SetMasterMountImagine(const struct FSBMasterMountImagine& MasterMountImagine, bool Used, bool IsBppIrredeemable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryTag.InventoryTag_C.SetMasterMountImagine");
		
		UInventoryTag_C_SetMasterMountImagine_Params params {};
		params.MasterMountImagine = MasterMountImagine;
		params.Used = Used;
		params.IsBppIrredeemable = IsBppIrredeemable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryTag.InventoryTag_C.SetMasterImagine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterImagine                            MasterImagine                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               Used                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsBppIrredeemable                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInventoryTag_C::SetMasterImagine(const struct FSBMasterImagine& MasterImagine, bool Used, bool IsBppIrredeemable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryTag.InventoryTag_C.SetMasterImagine");
		
		UInventoryTag_C_SetMasterImagine_Params params {};
		params.MasterImagine = MasterImagine;
		params.Used = Used;
		params.IsBppIrredeemable = IsBppIrredeemable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryTag.InventoryTag_C.SetMasterCostume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterCostume                            MasterCostume                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               Used                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsBppIrredeemable                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInventoryTag_C::SetMasterCostume(const struct FSBMasterCostume& MasterCostume, bool Used, bool IsBppIrredeemable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryTag.InventoryTag_C.SetMasterCostume");
		
		UInventoryTag_C_SetMasterCostume_Params params {};
		params.MasterCostume = MasterCostume;
		params.Used = Used;
		params.IsBppIrredeemable = IsBppIrredeemable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryTag.InventoryTag_C.SetWeaponMaster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBWeaponMasterData                         WeaponMaster                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               Used                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsBppIrredeemable                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInventoryTag_C::SetWeaponMaster(const struct FSBWeaponMasterData& WeaponMaster, bool Used, bool IsBppIrredeemable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryTag.InventoryTag_C.SetWeaponMaster");
		
		UInventoryTag_C_SetWeaponMaster_Params params {};
		params.WeaponMaster = WeaponMaster;
		params.Used = Used;
		params.IsBppIrredeemable = IsBppIrredeemable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryTag.InventoryTag_C.SetItemMasterData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FItemMasterData                             ItemMasterData                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               IsBppIrredeemable                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInventoryTag_C::SetItemMasterData(const struct FItemMasterData& ItemMasterData, bool IsBppIrredeemable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryTag.InventoryTag_C.SetItemMasterData");
		
		UInventoryTag_C_SetItemMasterData_Params params {};
		params.ItemMasterData = ItemMasterData;
		params.IsBppIrredeemable = IsBppIrredeemable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryTag.InventoryTag_C.SetBppChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBRewardItemType                                  RewardType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ItemId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Used                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsBppIrredeemable                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInventoryTag_C::SetBppChange(ESBRewardItemType RewardType, int32_t ItemId, bool Used, bool IsBppIrredeemable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryTag.InventoryTag_C.SetBppChange");
		
		UInventoryTag_C_SetBppChange_Params params {};
		params.RewardType = RewardType;
		params.ItemId = ItemId;
		params.Used = Used;
		params.IsBppIrredeemable = IsBppIrredeemable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryTag.InventoryTag_C.SetPossibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bPossible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            InParam                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventoryTag_C::SetPossibility(bool bPossible, int32_t InParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryTag.InventoryTag_C.SetPossibility");
		
		UInventoryTag_C_SetPossibility_Params params {};
		params.bPossible = bPossible;
		params.InParam = InParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryTag.InventoryTag_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInventoryTag_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryTag.InventoryTag_C.PreConstruct");
		
		UInventoryTag_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InventoryTag.InventoryTag_C.ExecuteUbergraph_InventoryTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInventoryTag_C::ExecuteUbergraph_InventoryTag(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryTag.InventoryTag_C.ExecuteUbergraph_InventoryTag");
		
		UInventoryTag_C_ExecuteUbergraph_InventoryTag_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInventoryTag_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInventoryTag_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass InventoryTag.InventoryTag_C");
		return ptr;
	}

}


