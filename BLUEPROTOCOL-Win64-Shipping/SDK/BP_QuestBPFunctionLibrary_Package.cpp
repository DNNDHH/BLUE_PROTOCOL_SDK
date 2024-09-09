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
	 * 		Name   -> Function BP_QuestBPFunctionLibrary.BP_QuestBPFunctionLibrary_C.GetAcceptableQuestNum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Num                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_QuestBPFunctionLibrary_C::GetAcceptableQuestNum(class UObject* __WorldContext, int32_t* Num)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_QuestBPFunctionLibrary.BP_QuestBPFunctionLibrary_C.GetAcceptableQuestNum");
		
		UBP_QuestBPFunctionLibrary_C_GetAcceptableQuestNum_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Num != nullptr)
			*Num = params.Num;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_QuestBPFunctionLibrary.BP_QuestBPFunctionLibrary_C.GetQuestDisplayStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InQuestIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EQuestStatus                                       OutQuestStatus                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_QuestBPFunctionLibrary_C::GetQuestDisplayStatus(int32_t InQuestIndex, class UObject* __WorldContext, EQuestStatus* OutQuestStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_QuestBPFunctionLibrary.BP_QuestBPFunctionLibrary_C.GetQuestDisplayStatus");
		
		UBP_QuestBPFunctionLibrary_C_GetQuestDisplayStatus_Params params {};
		params.InQuestIndex = InQuestIndex;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutQuestStatus != nullptr)
			*OutQuestStatus = params.OutQuestStatus;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_QuestBPFunctionLibrary.BP_QuestBPFunctionLibrary_C.IsQuestMultipleCompletable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InQuestIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bRet                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_QuestBPFunctionLibrary_C::IsQuestMultipleCompletable(int32_t InQuestIndex, class UObject* __WorldContext, bool* bRet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_QuestBPFunctionLibrary.BP_QuestBPFunctionLibrary_C.IsQuestMultipleCompletable");
		
		UBP_QuestBPFunctionLibrary_C_IsQuestMultipleCompletable_Params params {};
		params.InQuestIndex = InQuestIndex;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bRet != nullptr)
			*bRet = params.bRet;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_QuestBPFunctionLibrary.BP_QuestBPFunctionLibrary_C.FindRewardMasterData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InRewardId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsExist                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FSBMasterReward UBP_QuestBPFunctionLibrary_C::FindRewardMasterData(const class FName& InRewardId, class UObject* __WorldContext, bool* IsExist)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_QuestBPFunctionLibrary.BP_QuestBPFunctionLibrary_C.FindRewardMasterData");
		
		UBP_QuestBPFunctionLibrary_C_FindRewardMasterData_Params params {};
		params.InRewardId = InRewardId;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsExist != nullptr)
			*IsExist = params.IsExist;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_QuestBPFunctionLibrary.BP_QuestBPFunctionLibrary_C.GetQuestCategory2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            QuestIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EQuestCategory2                                    Category2                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_QuestBPFunctionLibrary_C::GetQuestCategory2(int32_t QuestIndex, class UObject* __WorldContext, EQuestCategory2* Category2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_QuestBPFunctionLibrary.BP_QuestBPFunctionLibrary_C.GetQuestCategory2");
		
		UBP_QuestBPFunctionLibrary_C_GetQuestCategory2_Params params {};
		params.QuestIndex = QuestIndex;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Category2 != nullptr)
			*Category2 = params.Category2;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_QuestBPFunctionLibrary.BP_QuestBPFunctionLibrary_C.FindQuestMasterDataByLongId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InLongId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FQuestMasterData                            QuestMasterData                                            (Parm, OutParm)
	 * 		bool                                               bExist                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_QuestBPFunctionLibrary_C::FindQuestMasterDataByLongId(const class FName& InLongId, class UObject* __WorldContext, struct FQuestMasterData* QuestMasterData, bool* bExist)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_QuestBPFunctionLibrary.BP_QuestBPFunctionLibrary_C.FindQuestMasterDataByLongId");
		
		UBP_QuestBPFunctionLibrary_C_FindQuestMasterDataByLongId_Params params {};
		params.InLongId = InLongId;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (QuestMasterData != nullptr)
			*QuestMasterData = params.QuestMasterData;
		if (bExist != nullptr)
			*bExist = params.bExist;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_QuestBPFunctionLibrary.BP_QuestBPFunctionLibrary_C.FindAcceptedQuestData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            QuestIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FAcceptedQuestInfo                          AcceptedQuestInfo                                          (Parm, OutParm)
	 * 		bool                                               Exist                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_QuestBPFunctionLibrary_C::FindAcceptedQuestData(int32_t QuestIndex, class UObject* __WorldContext, struct FAcceptedQuestInfo* AcceptedQuestInfo, bool* Exist)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_QuestBPFunctionLibrary.BP_QuestBPFunctionLibrary_C.FindAcceptedQuestData");
		
		UBP_QuestBPFunctionLibrary_C_FindAcceptedQuestData_Params params {};
		params.QuestIndex = QuestIndex;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AcceptedQuestInfo != nullptr)
			*AcceptedQuestInfo = params.AcceptedQuestInfo;
		if (Exist != nullptr)
			*Exist = params.Exist;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_QuestBPFunctionLibrary.BP_QuestBPFunctionLibrary_C.FindQuestMasterData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            QuestIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FQuestMasterData                            QuestMasterData                                            (Parm, OutParm)
	 * 		bool                                               Exist                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_QuestBPFunctionLibrary_C::FindQuestMasterData(int32_t QuestIndex, class UObject* __WorldContext, struct FQuestMasterData* QuestMasterData, bool* Exist)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_QuestBPFunctionLibrary.BP_QuestBPFunctionLibrary_C.FindQuestMasterData");
		
		UBP_QuestBPFunctionLibrary_C_FindQuestMasterData_Params params {};
		params.QuestIndex = QuestIndex;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (QuestMasterData != nullptr)
			*QuestMasterData = params.QuestMasterData;
		if (Exist != nullptr)
			*Exist = params.Exist;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_QuestBPFunctionLibrary.BP_QuestBPFunctionLibrary_C.GetQuestStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            QuestIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EQuestStatus                                       QuestStatus                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_QuestBPFunctionLibrary_C::GetQuestStatus(int32_t QuestIndex, class UObject* __WorldContext, EQuestStatus* QuestStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_QuestBPFunctionLibrary.BP_QuestBPFunctionLibrary_C.GetQuestStatus");
		
		UBP_QuestBPFunctionLibrary_C_GetQuestStatus_Params params {};
		params.QuestIndex = QuestIndex;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (QuestStatus != nullptr)
			*QuestStatus = params.QuestStatus;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_QuestBPFunctionLibrary_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_QuestBPFunctionLibrary_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_QuestBPFunctionLibrary.BP_QuestBPFunctionLibrary_C");
		return ptr;
	}

}


