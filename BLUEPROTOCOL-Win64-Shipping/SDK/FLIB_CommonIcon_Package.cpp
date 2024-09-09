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
	 * 		Name   -> Function FLIB_CommonIcon.FLIB_CommonIcon_C.GetLiquidMemoryEfficacyTypeName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBLiquidMemoryEfficacyType                        EfficacyType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      OutCategoryName                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UFLIB_CommonIcon_C::GetLiquidMemoryEfficacyTypeName(ESBLiquidMemoryEfficacyType EfficacyType, class UObject* __WorldContext, class FString* OutCategoryName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_CommonIcon.FLIB_CommonIcon_C.GetLiquidMemoryEfficacyTypeName");
		
		UFLIB_CommonIcon_C_GetLiquidMemoryEfficacyTypeName_Params params {};
		params.EfficacyType = EfficacyType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutCategoryName != nullptr)
			*OutCategoryName = params.OutCategoryName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_CommonIcon.FLIB_CommonIcon_C.GetLiquidMemoryCategoryName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBLiquidMemoryCategory                            InCategory                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      OutCategoryName                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UFLIB_CommonIcon_C::GetLiquidMemoryCategoryName(ESBLiquidMemoryCategory InCategory, class UObject* __WorldContext, class FString* OutCategoryName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_CommonIcon.FLIB_CommonIcon_C.GetLiquidMemoryCategoryName");
		
		UFLIB_CommonIcon_C_GetLiquidMemoryCategoryName_Params params {};
		params.InCategory = InCategory;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutCategoryName != nullptr)
			*OutCategoryName = params.OutCategoryName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_CommonIcon.FLIB_CommonIcon_C.GetRewardItemNameAndType2ByMasterReward
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterReward                             RewardData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        OutName                                                    (Parm, OutParm)
	 * 		class FText                                        OutType                                                    (Parm, OutParm)
	 * 		bool                                               OutNoName                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFLIB_CommonIcon_C::GetRewardItemNameAndType2ByMasterReward(const struct FSBMasterReward& RewardData, class UObject* __WorldContext, class FText* OutName, class FText* OutType, bool* OutNoName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_CommonIcon.FLIB_CommonIcon_C.GetRewardItemNameAndType2ByMasterReward");
		
		UFLIB_CommonIcon_C_GetRewardItemNameAndType2ByMasterReward_Params params {};
		params.RewardData = RewardData;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutName != nullptr)
			*OutName = params.OutName;
		if (OutType != nullptr)
			*OutType = params.OutType;
		if (OutNoName != nullptr)
			*OutNoName = params.OutNoName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_CommonIcon.FLIB_CommonIcon_C.GetRewardItemNameAndType2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBRewardItemType                                  InRewardItemType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InId                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            AmountMin                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bAddBrackets                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        OutName                                                    (Parm, OutParm)
	 * 		class FText                                        OutType                                                    (Parm, OutParm)
	 * 		bool                                               OutNoName                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFLIB_CommonIcon_C::GetRewardItemNameAndType2(ESBRewardItemType InRewardItemType, int32_t InId, int32_t Amount, int32_t AmountMin, bool bAddBrackets, class UObject* __WorldContext, class FText* OutName, class FText* OutType, bool* OutNoName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_CommonIcon.FLIB_CommonIcon_C.GetRewardItemNameAndType2");
		
		UFLIB_CommonIcon_C_GetRewardItemNameAndType2_Params params {};
		params.InRewardItemType = InRewardItemType;
		params.InId = InId;
		params.Amount = Amount;
		params.AmountMin = AmountMin;
		params.bAddBrackets = bAddBrackets;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutName != nullptr)
			*OutName = params.OutName;
		if (OutType != nullptr)
			*OutType = params.OutType;
		if (OutNoName != nullptr)
			*OutNoName = params.OutNoName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_CommonIcon.FLIB_CommonIcon_C.GetStampIDToCategoryNameAndStampI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            StampId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FText UFLIB_CommonIcon_C::GetStampIDToCategoryNameAndStampI(int32_t StampId, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_CommonIcon.FLIB_CommonIcon_C.GetStampIDToCategoryNameAndStampI");
		
		UFLIB_CommonIcon_C_GetStampIDToCategoryNameAndStampI_Params params {};
		params.StampId = StampId;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_CommonIcon.FLIB_CommonIcon_C.Add BracketsToString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bAdd                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FText UFLIB_CommonIcon_C::AddBracketsToString(bool bAdd, const class FString& Text, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_CommonIcon.FLIB_CommonIcon_C.Add BracketsToString");
		
		UFLIB_CommonIcon_C_AddBracketsToString_Params params {};
		params.bAdd = bAdd;
		params.Text = Text;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_CommonIcon.FLIB_CommonIcon_C.Get Reward Item Name and Type
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBRewardItemType                                  InRewardItemType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InId                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bAddBrackets                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        OutName                                                    (Parm, OutParm)
	 * 		class FText                                        OutType                                                    (Parm, OutParm)
	 * 		bool                                               OutNoName                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFLIB_CommonIcon_C::GetRewardItemNameandType(ESBRewardItemType InRewardItemType, int32_t InId, bool bAddBrackets, class UObject* __WorldContext, class FText* OutName, class FText* OutType, bool* OutNoName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_CommonIcon.FLIB_CommonIcon_C.Get Reward Item Name and Type");
		
		UFLIB_CommonIcon_C_GetRewardItemNameandType_Params params {};
		params.InRewardItemType = InRewardItemType;
		params.InId = InId;
		params.bAddBrackets = bAddBrackets;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutName != nullptr)
			*OutName = params.OutName;
		if (OutType != nullptr)
			*OutType = params.OutType;
		if (OutNoName != nullptr)
			*OutNoName = params.OutNoName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_CommonIcon.FLIB_CommonIcon_C.GetMountImagineToolTipText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InId                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bAddBrackets                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        OutName                                                    (Parm, OutParm)
	 * 		class FText                                        OutType                                                    (Parm, OutParm)
	 */
	void UFLIB_CommonIcon_C::GetMountImagineToolTipText(int32_t InId, bool bAddBrackets, class UObject* __WorldContext, class FText* OutName, class FText* OutType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_CommonIcon.FLIB_CommonIcon_C.GetMountImagineToolTipText");
		
		UFLIB_CommonIcon_C_GetMountImagineToolTipText_Params params {};
		params.InId = InId;
		params.bAddBrackets = bAddBrackets;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutName != nullptr)
			*OutName = params.OutName;
		if (OutType != nullptr)
			*OutType = params.OutType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_CommonIcon.FLIB_CommonIcon_C.GetLiquidMemoryTooltipText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InId                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bAddBrackets                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        OutName                                                    (Parm, OutParm)
	 * 		class FText                                        OutType                                                    (Parm, OutParm)
	 */
	void UFLIB_CommonIcon_C::GetLiquidMemoryTooltipText(int32_t InId, bool bAddBrackets, class UObject* __WorldContext, class FText* OutName, class FText* OutType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_CommonIcon.FLIB_CommonIcon_C.GetLiquidMemoryTooltipText");
		
		UFLIB_CommonIcon_C_GetLiquidMemoryTooltipText_Params params {};
		params.InId = InId;
		params.bAddBrackets = bAddBrackets;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutName != nullptr)
			*OutName = params.OutName;
		if (OutType != nullptr)
			*OutType = params.OutType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_CommonIcon.FLIB_CommonIcon_C.GetImagineToolTipText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InId                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bAddBrackets                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        OutName                                                    (Parm, OutParm)
	 * 		class FText                                        OutType                                                    (Parm, OutParm)
	 */
	void UFLIB_CommonIcon_C::GetImagineToolTipText(int32_t InId, bool bAddBrackets, class UObject* __WorldContext, class FText* OutName, class FText* OutType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_CommonIcon.FLIB_CommonIcon_C.GetImagineToolTipText");
		
		UFLIB_CommonIcon_C_GetImagineToolTipText_Params params {};
		params.InId = InId;
		params.bAddBrackets = bAddBrackets;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutName != nullptr)
			*OutName = params.OutName;
		if (OutType != nullptr)
			*OutType = params.OutType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_CommonIcon.FLIB_CommonIcon_C.GetCostumeToolTipText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CostumeId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bAddBrackets                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        OutName                                                    (Parm, OutParm)
	 * 		class FText                                        OutType                                                    (Parm, OutParm)
	 */
	void UFLIB_CommonIcon_C::GetCostumeToolTipText(int32_t CostumeId, bool bAddBrackets, class UObject* __WorldContext, class FText* OutName, class FText* OutType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_CommonIcon.FLIB_CommonIcon_C.GetCostumeToolTipText");
		
		UFLIB_CommonIcon_C_GetCostumeToolTipText_Params params {};
		params.CostumeId = CostumeId;
		params.bAddBrackets = bAddBrackets;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutName != nullptr)
			*OutName = params.OutName;
		if (OutType != nullptr)
			*OutType = params.OutType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_CommonIcon.FLIB_CommonIcon_C.GetWeaponToolTipText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            WeaponID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bAddBrackets                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        OutName                                                    (Parm, OutParm)
	 * 		class FText                                        OutType                                                    (Parm, OutParm)
	 */
	void UFLIB_CommonIcon_C::GetWeaponToolTipText(int32_t WeaponID, bool bAddBrackets, class UObject* __WorldContext, class FText* OutName, class FText* OutType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_CommonIcon.FLIB_CommonIcon_C.GetWeaponToolTipText");
		
		UFLIB_CommonIcon_C_GetWeaponToolTipText_Params params {};
		params.WeaponID = WeaponID;
		params.bAddBrackets = bAddBrackets;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutName != nullptr)
			*OutName = params.OutName;
		if (OutType != nullptr)
			*OutType = params.OutType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_CommonIcon.FLIB_CommonIcon_C.GetItemToolTipText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InItemIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Unidentified                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bAddBrackets                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        OutName                                                    (Parm, OutParm)
	 * 		class FText                                        OutType                                                    (Parm, OutParm)
	 */
	void UFLIB_CommonIcon_C::GetItemToolTipText(int32_t InItemIndex, bool Unidentified, bool bAddBrackets, class UObject* __WorldContext, class FText* OutName, class FText* OutType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_CommonIcon.FLIB_CommonIcon_C.GetItemToolTipText");
		
		UFLIB_CommonIcon_C_GetItemToolTipText_Params params {};
		params.InItemIndex = InItemIndex;
		params.Unidentified = Unidentified;
		params.bAddBrackets = bAddBrackets;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutName != nullptr)
			*OutName = params.OutName;
		if (OutType != nullptr)
			*OutType = params.OutType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFLIB_CommonIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFLIB_CommonIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FLIB_CommonIcon.FLIB_CommonIcon_C");
		return ptr;
	}

}


