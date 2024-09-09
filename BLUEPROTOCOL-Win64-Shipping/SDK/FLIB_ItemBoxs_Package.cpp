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
	 * 		Name   -> Function FLIB_ItemBoxs.FLIB_ItemBoxs_C.GetAmountMax_RewardType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBRewardItemType                                  InRewardType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InId                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            MaxAmoun                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFLIB_ItemBoxs_C::GetAmountMax_RewardType(ESBRewardItemType InRewardType, int32_t InId, class UObject* __WorldContext, int32_t* MaxAmoun)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_ItemBoxs.FLIB_ItemBoxs_C.GetAmountMax_RewardType");
		
		UFLIB_ItemBoxs_C_GetAmountMax_RewardType_Params params {};
		params.InRewardType = InRewardType;
		params.InId = InId;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MaxAmoun != nullptr)
			*MaxAmoun = params.MaxAmoun;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_ItemBoxs.FLIB_ItemBoxs_C.IsStackItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBRewardItemType                                  Selection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFLIB_ItemBoxs_C::IsStackItem(ESBRewardItemType Selection, class UObject* __WorldContext, bool* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_ItemBoxs.FLIB_ItemBoxs_C.IsStackItem");
		
		UFLIB_ItemBoxs_C_IsStackItem_Params params {};
		params.Selection = Selection;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_ItemBoxs.FLIB_ItemBoxs_C.IsCanNotLost
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBRewardItemType                                  TrwardType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CanNotLost                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFLIB_ItemBoxs_C::IsCanNotLost(ESBRewardItemType TrwardType, int32_t ID, class UObject* __WorldContext, bool* CanNotLost)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_ItemBoxs.FLIB_ItemBoxs_C.IsCanNotLost");
		
		UFLIB_ItemBoxs_C_IsCanNotLost_Params params {};
		params.TrwardType = TrwardType;
		params.ID = ID;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanNotLost != nullptr)
			*CanNotLost = params.CanNotLost;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_ItemBoxs.FLIB_ItemBoxs_C.IsOverlapping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBRewardItemType                                  InRewardType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InId                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bOverlapping                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFLIB_ItemBoxs_C::IsOverlapping(ESBRewardItemType InRewardType, int32_t InId, class UObject* __WorldContext, bool* bOverlapping)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_ItemBoxs.FLIB_ItemBoxs_C.IsOverlapping");
		
		UFLIB_ItemBoxs_C_IsOverlapping_Params params {};
		params.InRewardType = InRewardType;
		params.InId = InId;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bOverlapping != nullptr)
			*bOverlapping = params.bOverlapping;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_ItemBoxs.FLIB_ItemBoxs_C.Get Acquisitions Num Text
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InMax                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InMin                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Result                                                     (Parm, OutParm)
	 */
	void UFLIB_ItemBoxs_C::GetAcquisitionsNumText(int32_t InMax, int32_t InMin, class UObject* __WorldContext, class FText* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_ItemBoxs.FLIB_ItemBoxs_C.Get Acquisitions Num Text");
		
		UFLIB_ItemBoxs_C_GetAcquisitionsNumText_Params params {};
		params.InMax = InMax;
		params.InMin = InMin;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_ItemBoxs.FLIB_ItemBoxs_C.Check Use Min
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InMax                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InMin                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bUseMin                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            OutMax                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OutMin                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFLIB_ItemBoxs_C::CheckUseMin(int32_t InMax, int32_t InMin, class UObject* __WorldContext, bool* bUseMin, int32_t* OutMax, int32_t* OutMin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_ItemBoxs.FLIB_ItemBoxs_C.Check Use Min");
		
		UFLIB_ItemBoxs_C_CheckUseMin_Params params {};
		params.InMax = InMax;
		params.InMin = InMin;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bUseMin != nullptr)
			*bUseMin = params.bUseMin;
		if (OutMax != nullptr)
			*OutMax = params.OutMax;
		if (OutMin != nullptr)
			*OutMin = params.OutMin;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFLIB_ItemBoxs_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFLIB_ItemBoxs_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FLIB_ItemBoxs.FLIB_ItemBoxs_C");
		return ptr;
	}

}


