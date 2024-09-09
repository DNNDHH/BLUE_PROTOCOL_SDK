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
	 * 		Name   -> Function ItemIconBtn.ItemIconBtn_C.SetPickup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bValue                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UItemIconBtn_C::SetPickup(bool bValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemIconBtn.ItemIconBtn_C.SetPickup");
		
		UItemIconBtn_C_SetPickup_Params params {};
		params.bValue = bValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemIconBtn.ItemIconBtn_C.SetAmountVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visibility                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UItemIconBtn_C::SetAmountVisibility(bool Visibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemIconBtn.ItemIconBtn_C.SetAmountVisibility");
		
		UItemIconBtn_C_SetAmountVisibility_Params params {};
		params.Visibility = Visibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemIconBtn.ItemIconBtn_C.SetAmount2Visibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visibility                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UItemIconBtn_C::SetAmount2Visibility(bool Visibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemIconBtn.ItemIconBtn_C.SetAmount2Visibility");
		
		UItemIconBtn_C_SetAmount2Visibility_Params params {};
		params.Visibility = Visibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemIconBtn.ItemIconBtn_C.SetRewardData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBRewardItemType                                  InRewardType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InId                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InAmount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bLimitedTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UItemIconBtn_C::SetRewardData(ESBRewardItemType InRewardType, int32_t InId, int32_t InAmount, bool bLimitedTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemIconBtn.ItemIconBtn_C.SetRewardData");
		
		UItemIconBtn_C_SetRewardData_Params params {};
		params.InRewardType = InRewardType;
		params.InId = InId;
		params.InAmount = InAmount;
		params.bLimitedTime = bLimitedTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemIconBtn.ItemIconBtn_C.Set Icon Grp Visible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UItemIconBtn_C::SetIconGrpVisible(bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemIconBtn.ItemIconBtn_C.Set Icon Grp Visible");
		
		UItemIconBtn_C_SetIconGrpVisible_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemIconBtn.ItemIconBtn_C.SetScrollParameter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              BaseSize                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              OverSize                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UItemIconBtn_C::SetScrollParameter(float BaseSize, float OverSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemIconBtn.ItemIconBtn_C.SetScrollParameter");
		
		UItemIconBtn_C_SetScrollParameter_Params params {};
		params.BaseSize = BaseSize;
		params.OverSize = OverSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemIconBtn.ItemIconBtn_C.Set Scroll Visible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Offset                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UItemIconBtn_C::SetScrollVisible(float Offset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemIconBtn.ItemIconBtn_C.Set Scroll Visible");
		
		UItemIconBtn_C_SetScrollVisible_Params params {};
		params.Offset = Offset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemIconBtn.ItemIconBtn_C.Set Swap Scroll Visible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UItemIconBtn_C::SetSwapScrollVisible(bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemIconBtn.ItemIconBtn_C.Set Swap Scroll Visible");
		
		UItemIconBtn_C_SetSwapScrollVisible_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemIconBtn.ItemIconBtn_C.SetSetLockIconVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InUniqueId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            InStorageNumber                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UItemIconBtn_C::SetSetLockIconVisibility(const class FString& InUniqueId, int32_t InStorageNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemIconBtn.ItemIconBtn_C.SetSetLockIconVisibility");
		
		UItemIconBtn_C_SetSetLockIconVisibility_Params params {};
		params.InUniqueId = InUniqueId;
		params.InStorageNumber = InStorageNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemIconBtn.ItemIconBtn_C.SetNewBadgeVisibleByReaded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      UniqueId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UItemIconBtn_C::SetNewBadgeVisibleByReaded(bool enable, const class FString& UniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemIconBtn.ItemIconBtn_C.SetNewBadgeVisibleByReaded");
		
		UItemIconBtn_C_SetNewBadgeVisibleByReaded_Params params {};
		params.enable = enable;
		params.UniqueId = UniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemIconBtn.ItemIconBtn_C.SetImagineDetailData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInventoryItemData                          InItemData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		bool                                               InUseDetailedTooltip                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               InHiddenLockIcon                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               InHiddenAmout                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               InIsUnidentified                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               InLimitedTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               InStackBEffectiveDisplay                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bInUseClassTypeForLevelSync                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ESBClassType                                       InClassTypeForLevelSync                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UItemIconBtn_C::SetImagineDetailData(const struct FInventoryItemData& InItemData, bool InUseDetailedTooltip, bool InHiddenLockIcon, bool InHiddenAmout, bool InIsUnidentified, bool InLimitedTime, bool InStackBEffectiveDisplay, bool bInUseClassTypeForLevelSync, ESBClassType InClassTypeForLevelSync)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemIconBtn.ItemIconBtn_C.SetImagineDetailData");
		
		UItemIconBtn_C_SetImagineDetailData_Params params {};
		params.InItemData = InItemData;
		params.InUseDetailedTooltip = InUseDetailedTooltip;
		params.InHiddenLockIcon = InHiddenLockIcon;
		params.InHiddenAmout = InHiddenAmout;
		params.InIsUnidentified = InIsUnidentified;
		params.InLimitedTime = InLimitedTime;
		params.InStackBEffectiveDisplay = InStackBEffectiveDisplay;
		params.bInUseClassTypeForLevelSync = bInUseClassTypeForLevelSync;
		params.InClassTypeForLevelSync = InClassTypeForLevelSync;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemIconBtn.ItemIconBtn_C.GetCommonIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UCommonIcon_C*                               OutCommonIcon                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UItemIconBtn_C::GetCommonIcon(bool* IsValid, class UCommonIcon_C** OutCommonIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemIconBtn.ItemIconBtn_C.GetCommonIcon");
		
		UItemIconBtn_C_GetCommonIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
		if (OutCommonIcon != nullptr)
			*OutCommonIcon = params.OutCommonIcon;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemIconBtn.ItemIconBtn_C.SetIconWeapon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InItemIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsDetailsMode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      InItemUniqueId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            InStorageNumber                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UItemIconBtn_C::SetIconWeapon(int32_t InItemIndex, bool IsDetailsMode, const class FString& InItemUniqueId, int32_t InStorageNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemIconBtn.ItemIconBtn_C.SetIconWeapon");
		
		UItemIconBtn_C_SetIconWeapon_Params params {};
		params.InItemIndex = InItemIndex;
		params.IsDetailsMode = IsDetailsMode;
		params.InItemUniqueId = InItemUniqueId;
		params.InStorageNumber = InStorageNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemIconBtn.ItemIconBtn_C.SetImagineDetail_Index
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InputPin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      UniqueId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UItemIconBtn_C::SetImagineDetail_Index(int32_t InputPin, const class FString& UniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemIconBtn.ItemIconBtn_C.SetImagineDetail_Index");
		
		UItemIconBtn_C_SetImagineDetail_Index_Params params {};
		params.InputPin = InputPin;
		params.UniqueId = UniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemIconBtn.ItemIconBtn_C.SetWeaponDetail_Index
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InItemIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      InItemUniqueId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UItemIconBtn_C::SetWeaponDetail_Index(int32_t InItemIndex, const class FString& InItemUniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemIconBtn.ItemIconBtn_C.SetWeaponDetail_Index");
		
		UItemIconBtn_C_SetWeaponDetail_Index_Params params {};
		params.InItemIndex = InItemIndex;
		params.InItemUniqueId = InItemUniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemIconBtn.ItemIconBtn_C.SetLimitedTimeIconVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInventoryItemData                          InInventoryItemData                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UItemIconBtn_C::SetLimitedTimeIconVisibility(const struct FInventoryItemData& InInventoryItemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemIconBtn.ItemIconBtn_C.SetLimitedTimeIconVisibility");
		
		UItemIconBtn_C_SetLimitedTimeIconVisibility_Params params {};
		params.InInventoryItemData = InInventoryItemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemIconBtn.ItemIconBtn_C.Set Select Num
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Nu                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UItemIconBtn_C::SetSelectNum(int32_t Nu, bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemIconBtn.ItemIconBtn_C.Set Select Num");
		
		UItemIconBtn_C_SetSelectNum_Params params {};
		params.Nu = Nu;
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemIconBtn.ItemIconBtn_C.Set Costume Index
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UItemIconBtn_C::SetCostumeIndex(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemIconBtn.ItemIconBtn_C.Set Costume Index");
		
		UItemIconBtn_C_SetCostumeIndex_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemIconBtn.ItemIconBtn_C.SetSelectItemUniqueID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InventoryItemDataUniqueId                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		EItemType                                          InventoryItemDataItemType                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UItemIconBtn_C::SetSelectItemUniqueID(const class FString& InventoryItemDataUniqueId, EItemType InventoryItemDataItemType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemIconBtn.ItemIconBtn_C.SetSelectItemUniqueID");
		
		UItemIconBtn_C_SetSelectItemUniqueID_Params params {};
		params.InventoryItemDataUniqueId = InventoryItemDataUniqueId;
		params.InventoryItemDataItemType = InventoryItemDataItemType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemIconBtn.ItemIconBtn_C.GetSelectItemUniqueID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UniqueId                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UItemIconBtn_C::GetSelectItemUniqueID(class FString* UniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemIconBtn.ItemIconBtn_C.GetSelectItemUniqueID");
		
		UItemIconBtn_C_GetSelectItemUniqueID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UniqueId != nullptr)
			*UniqueId = params.UniqueId;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemIconBtn.ItemIconBtn_C.GetInventoryMountImagine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InUniqueId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		struct FSBCharacterMountImagineData                OutParameter                                               (Parm, OutParm)
	 */
	void UItemIconBtn_C::GetInventoryMountImagine(const class FString& InUniqueId, struct FSBCharacterMountImagineData* OutParameter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemIconBtn.ItemIconBtn_C.GetInventoryMountImagine");
		
		UItemIconBtn_C_GetInventoryMountImagine_Params params {};
		params.InUniqueId = InUniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutParameter != nullptr)
			*OutParameter = params.OutParameter;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemIconBtn.ItemIconBtn_C.SetMImagineRarity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InUniqueId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UItemIconBtn_C::SetMImagineRarity(const class FString& InUniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemIconBtn.ItemIconBtn_C.SetMImagineRarity");
		
		UItemIconBtn_C_SetMImagineRarity_Params params {};
		params.InUniqueId = InUniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemIconBtn.ItemIconBtn_C.IsItemLockIconDraw
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInventoryItemData                          InInventoryItemData                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		bool                                               HiddenLockIcon                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               OutLockFlag                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UItemIconBtn_C::IsItemLockIconDraw(const struct FInventoryItemData& InInventoryItemData, bool HiddenLockIcon, bool* OutLockFlag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemIconBtn.ItemIconBtn_C.IsItemLockIconDraw");
		
		UItemIconBtn_C_IsItemLockIconDraw_Params params {};
		params.InInventoryItemData = InInventoryItemData;
		params.HiddenLockIcon = HiddenLockIcon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutLockFlag != nullptr)
			*OutLockFlag = params.OutLockFlag;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemIconBtn.ItemIconBtn_C.SetIcon_Ornament
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsLockFlagDraw                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               InIsUnidentified                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bLimitedTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UItemIconBtn_C::SetIcon_Ornament(bool InIsLockFlagDraw, bool InIsUnidentified, bool bLimitedTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemIconBtn.ItemIconBtn_C.SetIcon_Ornament");
		
		UItemIconBtn_C_SetIcon_Ornament_Params params {};
		params.InIsLockFlagDraw = InIsLockFlagDraw;
		params.InIsUnidentified = InIsUnidentified;
		params.bLimitedTime = bLimitedTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemIconBtn.ItemIconBtn_C.SetIcon_MountImagine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsLockFlagDraw                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bLimitedTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UItemIconBtn_C::SetIcon_MountImagine(bool InIsLockFlagDraw, bool bLimitedTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemIconBtn.ItemIconBtn_C.SetIcon_MountImagine");
		
		UItemIconBtn_C_SetIcon_MountImagine_Params params {};
		params.InIsLockFlagDraw = InIsLockFlagDraw;
		params.bLimitedTime = bLimitedTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemIconBtn.ItemIconBtn_C.SetIcon_Costume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsLockFlagDraw                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bLimitedTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UItemIconBtn_C::SetIcon_Costume(bool InIsLockFlagDraw, bool bLimitedTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemIconBtn.ItemIconBtn_C.SetIcon_Costume");
		
		UItemIconBtn_C_SetIcon_Costume_Params params {};
		params.InIsLockFlagDraw = InIsLockFlagDraw;
		params.bLimitedTime = bLimitedTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemIconBtn.ItemIconBtn_C.SetIcon_Item
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsLockFlagDraw                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               InIsUnidentified                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bLimitedTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UItemIconBtn_C::SetIcon_Item(bool InIsLockFlagDraw, bool InIsUnidentified, bool bLimitedTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemIconBtn.ItemIconBtn_C.SetIcon_Item");
		
		UItemIconBtn_C_SetIcon_Item_Params params {};
		params.InIsLockFlagDraw = InIsLockFlagDraw;
		params.InIsUnidentified = InIsUnidentified;
		params.bLimitedTime = bLimitedTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemIconBtn.ItemIconBtn_C.SetIcon_Weapon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsLockFlagDraw                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               InUseWeaponTooltip                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bLimitedTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UItemIconBtn_C::SetIcon_Weapon(bool InIsLockFlagDraw, bool InUseWeaponTooltip, bool bLimitedTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemIconBtn.ItemIconBtn_C.SetIcon_Weapon");
		
		UItemIconBtn_C_SetIcon_Weapon_Params params {};
		params.InIsLockFlagDraw = InIsLockFlagDraw;
		params.InUseWeaponTooltip = InUseWeaponTooltip;
		params.bLimitedTime = bLimitedTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemIconBtn.ItemIconBtn_C.SetIcon_Imagine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsLockFlagDraw                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               InIsUseDetailsTooltip                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bLimitedTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bInUseClassTypeForLevelSync                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ESBClassType                                       InClassTypeForLevelSync                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UItemIconBtn_C::SetIcon_Imagine(bool InIsLockFlagDraw, bool InIsUseDetailsTooltip, bool bLimitedTime, bool bInUseClassTypeForLevelSync, ESBClassType InClassTypeForLevelSync)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemIconBtn.ItemIconBtn_C.SetIcon_Imagine");
		
		UItemIconBtn_C_SetIcon_Imagine_Params params {};
		params.InIsLockFlagDraw = InIsLockFlagDraw;
		params.InIsUseDetailsTooltip = InIsUseDetailsTooltip;
		params.bLimitedTime = bLimitedTime;
		params.bInUseClassTypeForLevelSync = bInUseClassTypeForLevelSync;
		params.InClassTypeForLevelSync = InClassTypeForLevelSync;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemIconBtn.ItemIconBtn_C.SetGrayMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsEnabled                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UItemIconBtn_C::SetGrayMode(bool bIsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemIconBtn.ItemIconBtn_C.SetGrayMode");
		
		UItemIconBtn_C_SetGrayMode_Params params {};
		params.bIsEnabled = bIsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemIconBtn.ItemIconBtn_C.AnimInOutPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInAnim                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UItemIconBtn_C::AnimInOutPlay(bool bInAnim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemIconBtn.ItemIconBtn_C.AnimInOutPlay");
		
		UItemIconBtn_C_AnimInOutPlay_Params params {};
		params.bInAnim = bInAnim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemIconBtn.ItemIconBtn_C.SetRightClickAccept
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsRightClickAccept                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UItemIconBtn_C::SetRightClickAccept(bool bIsRightClickAccept)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemIconBtn.ItemIconBtn_C.SetRightClickAccept");
		
		UItemIconBtn_C_SetRightClickAccept_Params params {};
		params.bIsRightClickAccept = bIsRightClickAccept;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemIconBtn.ItemIconBtn_C.SetImagineSimpleTooltip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsImagineSimpleTooltip                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UItemIconBtn_C::SetImagineSimpleTooltip(bool IsImagineSimpleTooltip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemIconBtn.ItemIconBtn_C.SetImagineSimpleTooltip");
		
		UItemIconBtn_C_SetImagineSimpleTooltip_Params params {};
		params.IsImagineSimpleTooltip = IsImagineSimpleTooltip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemIconBtn.ItemIconBtn_C.SetRarity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBRarity                                          InRarity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UItemIconBtn_C::SetRarity(ESBRarity InRarity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemIconBtn.ItemIconBtn_C.SetRarity");
		
		UItemIconBtn_C_SetRarity_Params params {};
		params.InRarity = InRarity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemIconBtn.ItemIconBtn_C.GetEquipIconVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OutIsEquipIconVisible                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UItemIconBtn_C::GetEquipIconVisibility(bool* OutIsEquipIconVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemIconBtn.ItemIconBtn_C.GetEquipIconVisibility");
		
		UItemIconBtn_C_GetEquipIconVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsEquipIconVisible != nullptr)
			*OutIsEquipIconVisible = params.OutIsEquipIconVisible;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemIconBtn.ItemIconBtn_C.SetEquipIconVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InVisibility                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UItemIconBtn_C::SetEquipIconVisibility(bool InVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemIconBtn.ItemIconBtn_C.SetEquipIconVisibility");
		
		UItemIconBtn_C_SetEquipIconVisibility_Params params {};
		params.InVisibility = InVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemIconBtn.ItemIconBtn_C.SetDragable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InDragable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UItemIconBtn_C::SetDragable(bool InDragable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemIconBtn.ItemIconBtn_C.SetDragable");
		
		UItemIconBtn_C_SetDragable_Params params {};
		params.InDragable = InDragable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemIconBtn.ItemIconBtn_C.OnPreviewMouseButtonDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UItemIconBtn_C::OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemIconBtn.ItemIconBtn_C.OnPreviewMouseButtonDown");
		
		UItemIconBtn_C_OnPreviewMouseButtonDown_Params params {};
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
	 * 		Name   -> Function ItemIconBtn.ItemIconBtn_C.OnDragDetected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               PointerEvent                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UDragDropOperation*                          Operation                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UItemIconBtn_C::OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemIconBtn.ItemIconBtn_C.OnDragDetected");
		
		UItemIconBtn_C_OnDragDetected_Params params {};
		params.MyGeometry = MyGeometry;
		params.PointerEvent = PointerEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Operation != nullptr)
			*Operation = params.Operation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemIconBtn.ItemIconBtn_C.SetHoveredColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UItemIconBtn_C::SetHoveredColor(const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemIconBtn.ItemIconBtn_C.SetHoveredColor");
		
		UItemIconBtn_C_SetHoveredColor_Params params {};
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemIconBtn.ItemIconBtn_C.SetHoveredSoundId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESystemSE                                          InSoundId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UItemIconBtn_C::SetHoveredSoundId(ESystemSE InSoundId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemIconBtn.ItemIconBtn_C.SetHoveredSoundId");
		
		UItemIconBtn_C_SetHoveredSoundId_Params params {};
		params.InSoundId = InSoundId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemIconBtn.ItemIconBtn_C.SetPressedSoundId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESystemSE                                          InSoundId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UItemIconBtn_C::SetPressedSoundId(ESystemSE InSoundId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemIconBtn.ItemIconBtn_C.SetPressedSoundId");
		
		UItemIconBtn_C_SetPressedSoundId_Params params {};
		params.InSoundId = InSoundId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemIconBtn.ItemIconBtn_C.SetIsButtonActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsActive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UItemIconBtn_C::SetIsButtonActive(bool IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemIconBtn.ItemIconBtn_C.SetIsButtonActive");
		
		UItemIconBtn_C_SetIsButtonActive_Params params {};
		params.IsActive = IsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemIconBtn.ItemIconBtn_C.SetTooltipEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnable                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UItemIconBtn_C::SetTooltipEnable(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemIconBtn.ItemIconBtn_C.SetTooltipEnable");
		
		UItemIconBtn_C_SetTooltipEnable_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemIconBtn.ItemIconBtn_C.Set Enable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsEnabled                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UItemIconBtn_C::SetEnable(bool bIsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemIconBtn.ItemIconBtn_C.Set Enable");
		
		UItemIconBtn_C_SetEnable_Params params {};
		params.bIsEnabled = bIsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemIconBtn.ItemIconBtn_C.SetIconBlank
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsBlank                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UItemIconBtn_C::SetIconBlank(bool IsBlank)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemIconBtn.ItemIconBtn_C.SetIconBlank");
		
		UItemIconBtn_C_SetIconBlank_Params params {};
		params.IsBlank = IsBlank;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemIconBtn.ItemIconBtn_C.SetDetach
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDetach                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UItemIconBtn_C::SetDetach(bool IsDetach)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemIconBtn.ItemIconBtn_C.SetDetach");
		
		UItemIconBtn_C_SetDetach_Params params {};
		params.IsDetach = IsDetach;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemIconBtn.ItemIconBtn_C.SetIconSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsSelected                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UItemIconBtn_C::SetIconSelected(bool IsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemIconBtn.ItemIconBtn_C.SetIconSelected");
		
		UItemIconBtn_C_SetIconSelected_Params params {};
		params.IsSelected = IsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemIconBtn.ItemIconBtn_C.IsIconEmpty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Empty                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UItemIconBtn_C::IsIconEmpty(bool* Empty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemIconBtn.ItemIconBtn_C.IsIconEmpty");
		
		UItemIconBtn_C_IsIconEmpty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Empty != nullptr)
			*Empty = params.Empty;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemIconBtn.ItemIconBtn_C.ResetEmpty
	 * 		Flags  -> ()
	 */
	void UItemIconBtn_C::ResetEmpty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemIconBtn.ItemIconBtn_C.ResetEmpty");
		
		UItemIconBtn_C_ResetEmpty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemIconBtn.ItemIconBtn_C.SetEmpty
	 * 		Flags  -> ()
	 */
	void UItemIconBtn_C::SetEmpty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemIconBtn.ItemIconBtn_C.SetEmpty");
		
		UItemIconBtn_C_SetEmpty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemIconBtn.ItemIconBtn_C.SetWeapon_Index
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InItemIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UItemIconBtn_C::SetWeapon_Index(int32_t InItemIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemIconBtn.ItemIconBtn_C.SetWeapon_Index");
		
		UItemIconBtn_C_SetWeapon_Index_Params params {};
		params.InItemIndex = InItemIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemIconBtn.ItemIconBtn_C.SetMountImagine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInventoryItemData                          InventoryItemData                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UItemIconBtn_C::SetMountImagine(const struct FInventoryItemData& InventoryItemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemIconBtn.ItemIconBtn_C.SetMountImagine");
		
		UItemIconBtn_C_SetMountImagine_Params params {};
		params.InventoryItemData = InventoryItemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemIconBtn.ItemIconBtn_C.SetImagine_Index
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InImagineItemId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UItemIconBtn_C::SetImagine_Index(int32_t InImagineItemId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemIconBtn.ItemIconBtn_C.SetImagine_Index");
		
		UItemIconBtn_C_SetImagine_Index_Params params {};
		params.InImagineItemId = InImagineItemId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemIconBtn.ItemIconBtn_C.SetItem_Index
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InItemIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InItemAmount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bLimitedTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UItemIconBtn_C::SetItem_Index(int32_t InItemIndex, int32_t InItemAmount, bool bLimitedTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemIconBtn.ItemIconBtn_C.SetItem_Index");
		
		UItemIconBtn_C_SetItem_Index_Params params {};
		params.InItemIndex = InItemIndex;
		params.InItemAmount = InItemAmount;
		params.bLimitedTime = bLimitedTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemIconBtn.ItemIconBtn_C.SetItem_InventoryData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInventoryItemData                          InItemData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		bool                                               InUseDetailsTooltip                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               HiddenLockIcon                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               HiddenAmout                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsUnidentified                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bLimitedTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               StackBEffectiveDisplay                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UItemIconBtn_C::SetItem_InventoryData(const struct FInventoryItemData& InItemData, bool InUseDetailsTooltip, bool HiddenLockIcon, bool HiddenAmout, bool IsUnidentified, bool bLimitedTime, bool StackBEffectiveDisplay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemIconBtn.ItemIconBtn_C.SetItem_InventoryData");
		
		UItemIconBtn_C_SetItem_InventoryData_Params params {};
		params.InItemData = InItemData;
		params.InUseDetailsTooltip = InUseDetailsTooltip;
		params.HiddenLockIcon = HiddenLockIcon;
		params.HiddenAmout = HiddenAmout;
		params.IsUnidentified = IsUnidentified;
		params.bLimitedTime = bLimitedTime;
		params.StackBEffectiveDisplay = StackBEffectiveDisplay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemIconBtn.ItemIconBtn_C.BP_OnEntryReleased
	 * 		Flags  -> ()
	 */
	void UItemIconBtn_C::BP_OnEntryReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemIconBtn.ItemIconBtn_C.BP_OnEntryReleased");
		
		UItemIconBtn_C_BP_OnEntryReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemIconBtn.ItemIconBtn_C.BP_OnItemExpansionChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsExpanded                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UItemIconBtn_C::BP_OnItemExpansionChanged(bool bIsExpanded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemIconBtn.ItemIconBtn_C.BP_OnItemExpansionChanged");
		
		UItemIconBtn_C_BP_OnItemExpansionChanged_Params params {};
		params.bIsExpanded = bIsExpanded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemIconBtn.ItemIconBtn_C.BP_OnItemSelectionChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsSelected                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UItemIconBtn_C::BP_OnItemSelectionChanged(bool bIsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemIconBtn.ItemIconBtn_C.BP_OnItemSelectionChanged");
		
		UItemIconBtn_C_BP_OnItemSelectionChanged_Params params {};
		params.bIsSelected = bIsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemIconBtn.ItemIconBtn_C.OnListItemObjectSet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     ListItemObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UItemIconBtn_C::OnListItemObjectSet(class UObject* ListItemObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemIconBtn.ItemIconBtn_C.OnListItemObjectSet");
		
		UItemIconBtn_C_OnListItemObjectSet_Params params {};
		params.ListItemObject = ListItemObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemIconBtn.ItemIconBtn_C.BndEvt__ItemIconBtn_CommonIcon_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCommonIcon_C*                               Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UItemIconBtn_C::BndEvt__ItemIconBtn_CommonIcon_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature(class UCommonIcon_C* Sender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemIconBtn.ItemIconBtn_C.BndEvt__ItemIconBtn_CommonIcon_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature");
		
		UItemIconBtn_C_BndEvt__ItemIconBtn_CommonIcon_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature_Params params {};
		params.Sender = Sender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemIconBtn.ItemIconBtn_C.BndEvt__ItemIconBtn_CommonIcon_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCommonIcon_C*                               Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UItemIconBtn_C::BndEvt__ItemIconBtn_CommonIcon_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature(class UCommonIcon_C* Sender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemIconBtn.ItemIconBtn_C.BndEvt__ItemIconBtn_CommonIcon_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature");
		
		UItemIconBtn_C_BndEvt__ItemIconBtn_CommonIcon_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature_Params params {};
		params.Sender = Sender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemIconBtn.ItemIconBtn_C.ExecuteUbergraph_ItemIconBtn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UItemIconBtn_C::ExecuteUbergraph_ItemIconBtn(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemIconBtn.ItemIconBtn_C.ExecuteUbergraph_ItemIconBtn");
		
		UItemIconBtn_C_ExecuteUbergraph_ItemIconBtn_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemIconBtn.ItemIconBtn_C.OnPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemIconBtn_C*                              SelectItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UItemIconBtn_C::OnPressed__DelegateSignature(class UItemIconBtn_C* SelectItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemIconBtn.ItemIconBtn_C.OnPressed__DelegateSignature");
		
		UItemIconBtn_C_OnPressed__DelegateSignature_Params params {};
		params.SelectItem = SelectItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemIconBtn.ItemIconBtn_C.OnSelectRight__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemIconBtn_C*                              SelectItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UItemIconBtn_C::OnSelectRight__DelegateSignature(class UItemIconBtn_C* SelectItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemIconBtn.ItemIconBtn_C.OnSelectRight__DelegateSignature");
		
		UItemIconBtn_C_OnSelectRight__DelegateSignature_Params params {};
		params.SelectItem = SelectItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemIconBtn.ItemIconBtn_C.OnSelect__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemIconBtn_C*                              SelectItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UItemIconBtn_C::OnSelect__DelegateSignature(class UItemIconBtn_C* SelectItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemIconBtn.ItemIconBtn_C.OnSelect__DelegateSignature");
		
		UItemIconBtn_C_OnSelect__DelegateSignature_Params params {};
		params.SelectItem = SelectItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UItemIconBtn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UItemIconBtn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ItemIconBtn.ItemIconBtn_C");
		return ptr;
	}

}


