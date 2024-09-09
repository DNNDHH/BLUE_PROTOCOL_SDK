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
	 * 		Name   -> Function CommonIconToolTip.CommonIconToolTip_C.CreateToolTipOrnament
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonIconToolTip_C::CreateToolTipOrnament(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconToolTip.CommonIconToolTip_C.CreateToolTipOrnament");
		
		UCommonIconToolTip_C_CreateToolTipOrnament_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconToolTip.CommonIconToolTip_C.SetBasedWeaponData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBWeaponItemData                           BasedWeaponData                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UCommonIconToolTip_C::SetBasedWeaponData(const struct FSBWeaponItemData& BasedWeaponData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconToolTip.CommonIconToolTip_C.SetBasedWeaponData");
		
		UCommonIconToolTip_C_SetBasedWeaponData_Params params {};
		params.BasedWeaponData = BasedWeaponData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconToolTip.CommonIconToolTip_C.CreateToolTipFusionItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InItemIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bUnidentified                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonIconToolTip_C::CreateToolTipFusionItem(int32_t InItemIndex, bool bUnidentified)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconToolTip.CommonIconToolTip_C.CreateToolTipFusionItem");
		
		UCommonIconToolTip_C_CreateToolTipFusionItem_Params params {};
		params.InItemIndex = InItemIndex;
		params.bUnidentified = bUnidentified;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconToolTip.CommonIconToolTip_C.CreateToolTipRecipeSet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FST_ToolTipInfo                             ToolTipInfo                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		bool                                               bCheckExisting                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonIconToolTip_C::CreateToolTipRecipeSet(const struct FST_ToolTipInfo& ToolTipInfo, bool bCheckExisting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconToolTip.CommonIconToolTip_C.CreateToolTipRecipeSet");
		
		UCommonIconToolTip_C_CreateToolTipRecipeSet_Params params {};
		params.ToolTipInfo = ToolTipInfo;
		params.bCheckExisting = bCheckExisting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconToolTip.CommonIconToolTip_C.CreateToolTipCommonTypeOnly
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FST_ToolTipInfo                             Info                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UCommonIconToolTip_C::CreateToolTipCommonTypeOnly(const struct FST_ToolTipInfo& Info)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconToolTip.CommonIconToolTip_C.CreateToolTipCommonTypeOnly");
		
		UCommonIconToolTip_C_CreateToolTipCommonTypeOnly_Params params {};
		params.Info = Info;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconToolTip.CommonIconToolTip_C.CreateToolTipCommonNameAndType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FST_ToolTipInfo                             Info                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UCommonIconToolTip_C::CreateToolTipCommonNameAndType(const struct FST_ToolTipInfo& Info)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconToolTip.CommonIconToolTip_C.CreateToolTipCommonNameAndType");
		
		UCommonIconToolTip_C_CreateToolTipCommonNameAndType_Params params {};
		params.Info = Info;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconToolTip.CommonIconToolTip_C.CreateToolTipItemBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FST_ToolTipInfo                             ToolTipInfo                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UCommonIconToolTip_C::CreateToolTipItemBox(const struct FST_ToolTipInfo& ToolTipInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconToolTip.CommonIconToolTip_C.CreateToolTipItemBox");
		
		UCommonIconToolTip_C_CreateToolTipItemBox_Params params {};
		params.ToolTipInfo = ToolTipInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconToolTip.CommonIconToolTip_C.CreateToolTipMountImagine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      InUniqueId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            InStorageNumber                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonIconToolTip_C::CreateToolTipMountImagine(int32_t InIndex, const class FString& InUniqueId, int32_t InStorageNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconToolTip.CommonIconToolTip_C.CreateToolTipMountImagine");
		
		UCommonIconToolTip_C_CreateToolTipMountImagine_Params params {};
		params.InIndex = InIndex;
		params.InUniqueId = InUniqueId;
		params.InStorageNumber = InStorageNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconToolTip.CommonIconToolTip_C.CreateToolTipLiquidMemory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InLiquidMemoryId                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonIconToolTip_C::CreateToolTipLiquidMemory(int32_t InLiquidMemoryId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconToolTip.CommonIconToolTip_C.CreateToolTipLiquidMemory");
		
		UCommonIconToolTip_C_CreateToolTipLiquidMemory_Params params {};
		params.InLiquidMemoryId = InLiquidMemoryId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconToolTip.CommonIconToolTip_C.CreateToolTipBrokenData
	 * 		Flags  -> ()
	 */
	void UCommonIconToolTip_C::CreateToolTipBrokenData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconToolTip.CommonIconToolTip_C.CreateToolTipBrokenData");
		
		UCommonIconToolTip_C_CreateToolTipBrokenData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconToolTip.CommonIconToolTip_C.CreateToolTipImagine_PaDetails
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InId                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      InUniqueId                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               bInUseClassTypeForLevelSync                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ESBClassType                                       InClassTypeForLevelSync                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsEffectiveDisplay                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bForceLevelSyncOff                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonIconToolTip_C::CreateToolTipImagine_PaDetails(int32_t InId, const class FString& InUniqueId, bool bInUseClassTypeForLevelSync, ESBClassType InClassTypeForLevelSync, bool IsEffectiveDisplay, bool bForceLevelSyncOff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconToolTip.CommonIconToolTip_C.CreateToolTipImagine_PaDetails");
		
		UCommonIconToolTip_C_CreateToolTipImagine_PaDetails_Params params {};
		params.InId = InId;
		params.InUniqueId = InUniqueId;
		params.bInUseClassTypeForLevelSync = bInUseClassTypeForLevelSync;
		params.InClassTypeForLevelSync = InClassTypeForLevelSync;
		params.IsEffectiveDisplay = IsEffectiveDisplay;
		params.bForceLevelSyncOff = bForceLevelSyncOff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconToolTip.CommonIconToolTip_C.CreateToolTipImagine_AcDetails
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InId                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      InUniqueId                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               bInIsImageIconActive                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bInUseClassTypeForLevelSync                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ESBClassType                                       InClassTypeForLevelSync                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsEffectiveDisplay                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bForceLevelSyncOff                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonIconToolTip_C::CreateToolTipImagine_AcDetails(int32_t InId, const class FString& InUniqueId, bool bInIsImageIconActive, bool bInUseClassTypeForLevelSync, ESBClassType InClassTypeForLevelSync, bool IsEffectiveDisplay, bool bForceLevelSyncOff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconToolTip.CommonIconToolTip_C.CreateToolTipImagine_AcDetails");
		
		UCommonIconToolTip_C_CreateToolTipImagine_AcDetails_Params params {};
		params.InId = InId;
		params.InUniqueId = InUniqueId;
		params.bInIsImageIconActive = bInIsImageIconActive;
		params.bInUseClassTypeForLevelSync = bInUseClassTypeForLevelSync;
		params.InClassTypeForLevelSync = InClassTypeForLevelSync;
		params.IsEffectiveDisplay = IsEffectiveDisplay;
		params.bForceLevelSyncOff = bForceLevelSyncOff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconToolTip.CommonIconToolTip_C.CreateToolTipImagine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InImagineItemId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      InUniqueId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            InStorageNumber                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonIconToolTip_C::CreateToolTipImagine(int32_t InImagineItemId, const class FString& InUniqueId, int32_t InStorageNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconToolTip.CommonIconToolTip_C.CreateToolTipImagine");
		
		UCommonIconToolTip_C_CreateToolTipImagine_Params params {};
		params.InImagineItemId = InImagineItemId;
		params.InUniqueId = InUniqueId;
		params.InStorageNumber = InStorageNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconToolTip.CommonIconToolTip_C.CreateToolTipContributionPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InAmount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonIconToolTip_C::CreateToolTipContributionPoint(int32_t InAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconToolTip.CommonIconToolTip_C.CreateToolTipContributionPoint");
		
		UCommonIconToolTip_C_CreateToolTipContributionPoint_Params params {};
		params.InAmount = InAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconToolTip.CommonIconToolTip_C.CreateToolTipStamp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InStampId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonIconToolTip_C::CreateToolTipStamp(int32_t InStampId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconToolTip.CommonIconToolTip_C.CreateToolTipStamp");
		
		UCommonIconToolTip_C_CreateToolTipStamp_Params params {};
		params.InStampId = InStampId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconToolTip.CommonIconToolTip_C.CreateToolTipEmotion
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InId                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonIconToolTip_C::CreateToolTipEmotion(const class FName& InId, int32_t InIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconToolTip.CommonIconToolTip_C.CreateToolTipEmotion");
		
		UCommonIconToolTip_C_CreateToolTipEmotion_Params params {};
		params.InId = InId;
		params.InIndex = InIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconToolTip.CommonIconToolTip_C.CreateToolTipMoney
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InAmount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        OptionText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        InAmountText                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UCommonIconToolTip_C::CreateToolTipMoney(int32_t InAmount, const class FText& OptionText, const class FText& InAmountText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconToolTip.CommonIconToolTip_C.CreateToolTipMoney");
		
		UCommonIconToolTip_C_CreateToolTipMoney_Params params {};
		params.InAmount = InAmount;
		params.OptionText = OptionText;
		params.InAmountText = InAmountText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconToolTip.CommonIconToolTip_C.CreateToolTipCostume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InItemIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonIconToolTip_C::CreateToolTipCostume(int32_t InItemIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconToolTip.CommonIconToolTip_C.CreateToolTipCostume");
		
		UCommonIconToolTip_C_CreateToolTipCostume_Params params {};
		params.InItemIndex = InItemIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconToolTip.CommonIconToolTip_C.CreateToolTipWeapon_Details
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InItemIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      InItemUniqueId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            InStorageId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsEffectiveDisplay                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               InForceLevelSyncOff                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonIconToolTip_C::CreateToolTipWeapon_Details(int32_t InItemIndex, const class FString& InItemUniqueId, int32_t InStorageId, bool IsEffectiveDisplay, bool InForceLevelSyncOff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconToolTip.CommonIconToolTip_C.CreateToolTipWeapon_Details");
		
		UCommonIconToolTip_C_CreateToolTipWeapon_Details_Params params {};
		params.InItemIndex = InItemIndex;
		params.InItemUniqueId = InItemUniqueId;
		params.InStorageId = InStorageId;
		params.IsEffectiveDisplay = IsEffectiveDisplay;
		params.InForceLevelSyncOff = InForceLevelSyncOff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconToolTip.CommonIconToolTip_C.CreateToolTipWeapon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InItemIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      InUniqueId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            InStorageNumber                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonIconToolTip_C::CreateToolTipWeapon(int32_t InItemIndex, const class FString& InUniqueId, int32_t InStorageNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconToolTip.CommonIconToolTip_C.CreateToolTipWeapon");
		
		UCommonIconToolTip_C_CreateToolTipWeapon_Params params {};
		params.InItemIndex = InItemIndex;
		params.InUniqueId = InUniqueId;
		params.InStorageNumber = InStorageNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconToolTip.CommonIconToolTip_C.CreateToolTipItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InItemIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bUnidentified                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonIconToolTip_C::CreateToolTipItem(int32_t InItemIndex, bool bUnidentified)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconToolTip.CommonIconToolTip_C.CreateToolTipItem");
		
		UCommonIconToolTip_C_CreateToolTipItem_Params params {};
		params.InItemIndex = InItemIndex;
		params.bUnidentified = bUnidentified;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconToolTip.CommonIconToolTip_C.CreateContentsInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FST_ToolTipInfo                             InToolTipInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UCommonIconToolTip_C::CreateContentsInfo(const struct FST_ToolTipInfo& InToolTipInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconToolTip.CommonIconToolTip_C.CreateContentsInfo");
		
		UCommonIconToolTip_C_CreateContentsInfo_Params params {};
		params.InToolTipInfo = InToolTipInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconToolTip.CommonIconToolTip_C.DeleteAllChildren
	 * 		Flags  -> ()
	 */
	void UCommonIconToolTip_C::DeleteAllChildren()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconToolTip.CommonIconToolTip_C.DeleteAllChildren");
		
		UCommonIconToolTip_C_DeleteAllChildren_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconToolTip.CommonIconToolTip_C.ExecuteUbergraph_CommonIconToolTip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonIconToolTip_C::ExecuteUbergraph_CommonIconToolTip(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconToolTip.CommonIconToolTip_C.ExecuteUbergraph_CommonIconToolTip");
		
		UCommonIconToolTip_C_ExecuteUbergraph_CommonIconToolTip_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonIconToolTip_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonIconToolTip_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CommonIconToolTip.CommonIconToolTip_C");
		return ptr;
	}

}


