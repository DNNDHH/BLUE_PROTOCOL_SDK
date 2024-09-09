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
	 * 		Name   -> Function BP_UI_AestheShopFunctionLibrary.BP_UI_AestheShopFunctionLibrary_C.CheckIfAestheCourseEventTermIsActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InCourseId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bOutIsActive                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_UI_AestheShopFunctionLibrary_C::CheckIfAestheCourseEventTermIsActive(int32_t InCourseId, class UObject* __WorldContext, bool* bOutIsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_AestheShopFunctionLibrary.BP_UI_AestheShopFunctionLibrary_C.CheckIfAestheCourseEventTermIsActive");
		
		UBP_UI_AestheShopFunctionLibrary_C_CheckIfAestheCourseEventTermIsActive_Params params {};
		params.InCourseId = InCourseId;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bOutIsActive != nullptr)
			*bOutIsActive = params.bOutIsActive;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_AestheShopFunctionLibrary.BP_UI_AestheShopFunctionLibrary_C.SortAesthePartsIconInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FST_AestheShopPartsIconComplexInfo>  InInfo                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FST_AestheShopPartsIconComplexInfo>  OutSortedInfo                                              (Parm, OutParm)
	 */
	void UBP_UI_AestheShopFunctionLibrary_C::SortAesthePartsIconInfo(TArray<struct FST_AestheShopPartsIconComplexInfo>* InInfo, class UObject* __WorldContext, TArray<struct FST_AestheShopPartsIconComplexInfo>* OutSortedInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_AestheShopFunctionLibrary.BP_UI_AestheShopFunctionLibrary_C.SortAesthePartsIconInfo");
		
		UBP_UI_AestheShopFunctionLibrary_C_SortAesthePartsIconInfo_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InInfo != nullptr)
			*InInfo = params.InInfo;
		if (OutSortedInfo != nullptr)
			*OutSortedInfo = params.OutSortedInfo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_AestheShopFunctionLibrary.BP_UI_AestheShopFunctionLibrary_C.GetAesthePartsSortId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InIconId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OutSortId                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_UI_AestheShopFunctionLibrary_C::GetAesthePartsSortId(const class FString& InIconId, class UObject* __WorldContext, int32_t* OutSortId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_AestheShopFunctionLibrary.BP_UI_AestheShopFunctionLibrary_C.GetAesthePartsSortId");
		
		UBP_UI_AestheShopFunctionLibrary_C_GetAesthePartsSortId_Params params {};
		params.InIconId = InIconId;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSortId != nullptr)
			*OutSortId = params.OutSortId;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_AestheShopFunctionLibrary.BP_UI_AestheShopFunctionLibrary_C.IsAesthePartsIconActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InPartsIconId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		struct FDateTime                                   InNowTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OutIsIconActive                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_UI_AestheShopFunctionLibrary_C::IsAesthePartsIconActive(const class FString& InPartsIconId, const struct FDateTime& InNowTime, class UObject* __WorldContext, bool* OutIsIconActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_AestheShopFunctionLibrary.BP_UI_AestheShopFunctionLibrary_C.IsAesthePartsIconActive");
		
		UBP_UI_AestheShopFunctionLibrary_C_IsAesthePartsIconActive_Params params {};
		params.InPartsIconId = InPartsIconId;
		params.InNowTime = InNowTime;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsIconActive != nullptr)
			*OutIsIconActive = params.OutIsIconActive;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_AestheShopFunctionLibrary.BP_UI_AestheShopFunctionLibrary_C.GetAestheCategoryIconTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_AestheShop_TopMenuItems_DetailSettings           InAestheDetailSettingType                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_UI_AestheShopFunctionLibrary_C::GetAestheCategoryIconTexture(E_AestheShop_TopMenuItems_DetailSettings InAestheDetailSettingType, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_AestheShopFunctionLibrary.BP_UI_AestheShopFunctionLibrary_C.GetAestheCategoryIconTexture");
		
		UBP_UI_AestheShopFunctionLibrary_C_GetAestheCategoryIconTexture_Params params {};
		params.InAestheDetailSettingType = InAestheDetailSettingType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_AestheShopFunctionLibrary.BP_UI_AestheShopFunctionLibrary_C.FindAestheCourseMaster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InCourseId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OutIsValid                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSBAestheShopCourseMasterData               OutMaster                                                  (Parm, OutParm)
	 */
	void UBP_UI_AestheShopFunctionLibrary_C::FindAestheCourseMaster(int32_t InCourseId, class UObject* __WorldContext, bool* OutIsValid, struct FSBAestheShopCourseMasterData* OutMaster)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_AestheShopFunctionLibrary.BP_UI_AestheShopFunctionLibrary_C.FindAestheCourseMaster");
		
		UBP_UI_AestheShopFunctionLibrary_C_FindAestheCourseMaster_Params params {};
		params.InCourseId = InCourseId;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsValid != nullptr)
			*OutIsValid = params.OutIsValid;
		if (OutMaster != nullptr)
			*OutMaster = params.OutMaster;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_UI_AestheShopFunctionLibrary_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_UI_AestheShopFunctionLibrary_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_UI_AestheShopFunctionLibrary.BP_UI_AestheShopFunctionLibrary_C");
		return ptr;
	}

}


