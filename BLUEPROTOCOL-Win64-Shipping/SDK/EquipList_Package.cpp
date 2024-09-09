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
	 * 		Name   -> Function EquipList.EquipList_C.SetOtherPCAccessoriesData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FOwnItemInfo>                        InAccessoriesData                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FPlayerProfileMenuDetailCharaEquipInfo      InCharaEquipInfo                                           (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UEquipList_C::SetOtherPCAccessoriesData(TArray<struct FOwnItemInfo>* InAccessoriesData, const struct FPlayerProfileMenuDetailCharaEquipInfo& InCharaEquipInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipList.EquipList_C.SetOtherPCAccessoriesData");
		
		UEquipList_C_SetOtherPCAccessoriesData_Params params {};
		params.InCharaEquipInfo = InCharaEquipInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InAccessoriesData != nullptr)
			*InAccessoriesData = params.InAccessoriesData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipList.EquipList_C.SetOtherPCData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FOwnItemInfo>                        InEquipCostumesOwnItemInfoList                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FOwnItemInfo>                        InEquipAccessoriesOwnItemInfoList                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FOwnItemInfo>                        InEquipUnderwearOwnItemInfoList                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FPlayerProfileMenuDetailCharaEquipInfo      InCharaEquipInfo                                           (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FOwnItemInfo                                InEquipMountImagineOwnItemInfo                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UEquipList_C::SetOtherPCData(TArray<struct FOwnItemInfo>* InEquipCostumesOwnItemInfoList, TArray<struct FOwnItemInfo>* InEquipAccessoriesOwnItemInfoList, TArray<struct FOwnItemInfo>* InEquipUnderwearOwnItemInfoList, const struct FPlayerProfileMenuDetailCharaEquipInfo& InCharaEquipInfo, const struct FOwnItemInfo& InEquipMountImagineOwnItemInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipList.EquipList_C.SetOtherPCData");
		
		UEquipList_C_SetOtherPCData_Params params {};
		params.InCharaEquipInfo = InCharaEquipInfo;
		params.InEquipMountImagineOwnItemInfo = InEquipMountImagineOwnItemInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InEquipCostumesOwnItemInfoList != nullptr)
			*InEquipCostumesOwnItemInfoList = params.InEquipCostumesOwnItemInfoList;
		if (InEquipAccessoriesOwnItemInfoList != nullptr)
			*InEquipAccessoriesOwnItemInfoList = params.InEquipAccessoriesOwnItemInfoList;
		if (InEquipUnderwearOwnItemInfoList != nullptr)
			*InEquipUnderwearOwnItemInfoList = params.InEquipUnderwearOwnItemInfoList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipList.EquipList_C.SetMountImagineData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                InMountImagine                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UEquipList_C::SetMountImagineData(const struct FOwnItemInfo& InMountImagine)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipList.EquipList_C.SetMountImagineData");
		
		UEquipList_C_SetMountImagineData_Params params {};
		params.InMountImagine = InMountImagine;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipList.EquipList_C.SetAccessoriesData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FOwnItemInfo>                        InAccessoriesData                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UEquipList_C::SetAccessoriesData(TArray<struct FOwnItemInfo>* InAccessoriesData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipList.EquipList_C.SetAccessoriesData");
		
		UEquipList_C_SetAccessoriesData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InAccessoriesData != nullptr)
			*InAccessoriesData = params.InAccessoriesData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipList.EquipList_C.SetUnderWearData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FOwnItemInfo>                        InUnderWearData                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UEquipList_C::SetUnderWearData(TArray<struct FOwnItemInfo>* InUnderWearData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipList.EquipList_C.SetUnderWearData");
		
		UEquipList_C_SetUnderWearData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InUnderWearData != nullptr)
			*InUnderWearData = params.InUnderWearData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipList.EquipList_C.SetCostumeData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FOwnItemInfo>                        InCostumeData                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UEquipList_C::SetCostumeData(TArray<struct FOwnItemInfo>* InCostumeData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipList.EquipList_C.SetCostumeData");
		
		UEquipList_C_SetCostumeData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InCostumeData != nullptr)
			*InCostumeData = params.InCostumeData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipList.EquipList_C.SetArmorData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FOwnItemInfo>                        InOwnItemList                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UArmorList_C*                                InArmorList                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEquipList_C::SetArmorData(TArray<struct FOwnItemInfo>* InOwnItemList, class UArmorList_C* InArmorList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipList.EquipList_C.SetArmorData");
		
		UEquipList_C_SetArmorData_Params params {};
		params.InArmorList = InArmorList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InOwnItemList != nullptr)
			*InOwnItemList = params.InOwnItemList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipList.EquipList_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FOwnItemInfo>                        InCostumeOwnItemInfoList                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FOwnItemInfo>                        InUnderWearOwnItemInfoList                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FOwnItemInfo>                        InAccesoriesOwnItemInfoList                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FOwnItemInfo                                InMountImagine                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UEquipList_C::SetData(TArray<struct FOwnItemInfo> InCostumeOwnItemInfoList, TArray<struct FOwnItemInfo>* InUnderWearOwnItemInfoList, TArray<struct FOwnItemInfo>* InAccesoriesOwnItemInfoList, const struct FOwnItemInfo& InMountImagine)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipList.EquipList_C.SetData");
		
		UEquipList_C_SetData_Params params {};
		params.InCostumeOwnItemInfoList = InCostumeOwnItemInfoList;
		params.InMountImagine = InMountImagine;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InUnderWearOwnItemInfoList != nullptr)
			*InUnderWearOwnItemInfoList = params.InUnderWearOwnItemInfoList;
		if (InAccesoriesOwnItemInfoList != nullptr)
			*InAccesoriesOwnItemInfoList = params.InAccesoriesOwnItemInfoList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipList.EquipList_C.BndEvt__EquipList_Costume_HeadIcon_K2Node_ComponentBoundEvent_14_OnClickedCostumeIcon__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            outItemIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      outUniqueId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UEquipList_C::BndEvt__EquipList_Costume_HeadIcon_K2Node_ComponentBoundEvent_14_OnClickedCostumeIcon__DelegateSignature(int32_t outItemIndex, const class FString& outUniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipList.EquipList_C.BndEvt__EquipList_Costume_HeadIcon_K2Node_ComponentBoundEvent_14_OnClickedCostumeIcon__DelegateSignature");
		
		UEquipList_C_BndEvt__EquipList_Costume_HeadIcon_K2Node_ComponentBoundEvent_14_OnClickedCostumeIcon__DelegateSignature_Params params {};
		params.outItemIndex = outItemIndex;
		params.outUniqueId = outUniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipList.EquipList_C.BndEvt__EquipList_Costume_WearIcon_K2Node_ComponentBoundEvent_15_OnClickedCostumeIcon__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            outItemIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      outUniqueId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UEquipList_C::BndEvt__EquipList_Costume_WearIcon_K2Node_ComponentBoundEvent_15_OnClickedCostumeIcon__DelegateSignature(int32_t outItemIndex, const class FString& outUniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipList.EquipList_C.BndEvt__EquipList_Costume_WearIcon_K2Node_ComponentBoundEvent_15_OnClickedCostumeIcon__DelegateSignature");
		
		UEquipList_C_BndEvt__EquipList_Costume_WearIcon_K2Node_ComponentBoundEvent_15_OnClickedCostumeIcon__DelegateSignature_Params params {};
		params.outItemIndex = outItemIndex;
		params.outUniqueId = outUniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipList.EquipList_C.BndEvt__EquipList_Costume_HandIcon_K2Node_ComponentBoundEvent_16_OnClickedCostumeIcon__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            outItemIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      outUniqueId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UEquipList_C::BndEvt__EquipList_Costume_HandIcon_K2Node_ComponentBoundEvent_16_OnClickedCostumeIcon__DelegateSignature(int32_t outItemIndex, const class FString& outUniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipList.EquipList_C.BndEvt__EquipList_Costume_HandIcon_K2Node_ComponentBoundEvent_16_OnClickedCostumeIcon__DelegateSignature");
		
		UEquipList_C_BndEvt__EquipList_Costume_HandIcon_K2Node_ComponentBoundEvent_16_OnClickedCostumeIcon__DelegateSignature_Params params {};
		params.outItemIndex = outItemIndex;
		params.outUniqueId = outUniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipList.EquipList_C.BndEvt__EquipList_Costume_UnderWearIcon_K2Node_ComponentBoundEvent_17_OnClickedCostumeIcon__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            outItemIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      outUniqueId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UEquipList_C::BndEvt__EquipList_Costume_UnderWearIcon_K2Node_ComponentBoundEvent_17_OnClickedCostumeIcon__DelegateSignature(int32_t outItemIndex, const class FString& outUniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipList.EquipList_C.BndEvt__EquipList_Costume_UnderWearIcon_K2Node_ComponentBoundEvent_17_OnClickedCostumeIcon__DelegateSignature");
		
		UEquipList_C_BndEvt__EquipList_Costume_UnderWearIcon_K2Node_ComponentBoundEvent_17_OnClickedCostumeIcon__DelegateSignature_Params params {};
		params.outItemIndex = outItemIndex;
		params.outUniqueId = outUniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipList.EquipList_C.BndEvt__EquipList_Costume_ShoesIcon_K2Node_ComponentBoundEvent_18_OnClickedCostumeIcon__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            outItemIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      outUniqueId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UEquipList_C::BndEvt__EquipList_Costume_ShoesIcon_K2Node_ComponentBoundEvent_18_OnClickedCostumeIcon__DelegateSignature(int32_t outItemIndex, const class FString& outUniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipList.EquipList_C.BndEvt__EquipList_Costume_ShoesIcon_K2Node_ComponentBoundEvent_18_OnClickedCostumeIcon__DelegateSignature");
		
		UEquipList_C_BndEvt__EquipList_Costume_ShoesIcon_K2Node_ComponentBoundEvent_18_OnClickedCostumeIcon__DelegateSignature_Params params {};
		params.outItemIndex = outItemIndex;
		params.outUniqueId = outUniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipList.EquipList_C.BndEvt__EquipList_Costume_BottomsIcon_K2Node_ComponentBoundEvent_19_OnClickedCostumeIcon__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            outItemIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      outUniqueId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UEquipList_C::BndEvt__EquipList_Costume_BottomsIcon_K2Node_ComponentBoundEvent_19_OnClickedCostumeIcon__DelegateSignature(int32_t outItemIndex, const class FString& outUniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipList.EquipList_C.BndEvt__EquipList_Costume_BottomsIcon_K2Node_ComponentBoundEvent_19_OnClickedCostumeIcon__DelegateSignature");
		
		UEquipList_C_BndEvt__EquipList_Costume_BottomsIcon_K2Node_ComponentBoundEvent_19_OnClickedCostumeIcon__DelegateSignature_Params params {};
		params.outItemIndex = outItemIndex;
		params.outUniqueId = outUniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipList.EquipList_C.BndEvt__EquipList_Accessories_BackIcon_K2Node_ComponentBoundEvent_20_OnClickedCostumeIcon__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            outItemIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      outUniqueId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UEquipList_C::BndEvt__EquipList_Accessories_BackIcon_K2Node_ComponentBoundEvent_20_OnClickedCostumeIcon__DelegateSignature(int32_t outItemIndex, const class FString& outUniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipList.EquipList_C.BndEvt__EquipList_Accessories_BackIcon_K2Node_ComponentBoundEvent_20_OnClickedCostumeIcon__DelegateSignature");
		
		UEquipList_C_BndEvt__EquipList_Accessories_BackIcon_K2Node_ComponentBoundEvent_20_OnClickedCostumeIcon__DelegateSignature_Params params {};
		params.outItemIndex = outItemIndex;
		params.outUniqueId = outUniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipList.EquipList_C.BndEvt__EquipList_Accessories_BottomsIcon_K2Node_ComponentBoundEvent_21_OnClickedCostumeIcon__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            outItemIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      outUniqueId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UEquipList_C::BndEvt__EquipList_Accessories_BottomsIcon_K2Node_ComponentBoundEvent_21_OnClickedCostumeIcon__DelegateSignature(int32_t outItemIndex, const class FString& outUniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipList.EquipList_C.BndEvt__EquipList_Accessories_BottomsIcon_K2Node_ComponentBoundEvent_21_OnClickedCostumeIcon__DelegateSignature");
		
		UEquipList_C_BndEvt__EquipList_Accessories_BottomsIcon_K2Node_ComponentBoundEvent_21_OnClickedCostumeIcon__DelegateSignature_Params params {};
		params.outItemIndex = outItemIndex;
		params.outUniqueId = outUniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipList.EquipList_C.BndEvt__EquipList_Accessories_EarIcon_K2Node_ComponentBoundEvent_22_OnClickedCostumeIcon__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            outItemIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      outUniqueId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UEquipList_C::BndEvt__EquipList_Accessories_EarIcon_K2Node_ComponentBoundEvent_22_OnClickedCostumeIcon__DelegateSignature(int32_t outItemIndex, const class FString& outUniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipList.EquipList_C.BndEvt__EquipList_Accessories_EarIcon_K2Node_ComponentBoundEvent_22_OnClickedCostumeIcon__DelegateSignature");
		
		UEquipList_C_BndEvt__EquipList_Accessories_EarIcon_K2Node_ComponentBoundEvent_22_OnClickedCostumeIcon__DelegateSignature_Params params {};
		params.outItemIndex = outItemIndex;
		params.outUniqueId = outUniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipList.EquipList_C.BndEvt__EquipList_Accessories_EyeIcon_K2Node_ComponentBoundEvent_23_OnClickedCostumeIcon__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            outItemIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      outUniqueId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UEquipList_C::BndEvt__EquipList_Accessories_EyeIcon_K2Node_ComponentBoundEvent_23_OnClickedCostumeIcon__DelegateSignature(int32_t outItemIndex, const class FString& outUniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipList.EquipList_C.BndEvt__EquipList_Accessories_EyeIcon_K2Node_ComponentBoundEvent_23_OnClickedCostumeIcon__DelegateSignature");
		
		UEquipList_C_BndEvt__EquipList_Accessories_EyeIcon_K2Node_ComponentBoundEvent_23_OnClickedCostumeIcon__DelegateSignature_Params params {};
		params.outItemIndex = outItemIndex;
		params.outUniqueId = outUniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipList.EquipList_C.BndEvt__EquipList_Accessories_FaceIcon_K2Node_ComponentBoundEvent_24_OnClickedCostumeIcon__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            outItemIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      outUniqueId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UEquipList_C::BndEvt__EquipList_Accessories_FaceIcon_K2Node_ComponentBoundEvent_24_OnClickedCostumeIcon__DelegateSignature(int32_t outItemIndex, const class FString& outUniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipList.EquipList_C.BndEvt__EquipList_Accessories_FaceIcon_K2Node_ComponentBoundEvent_24_OnClickedCostumeIcon__DelegateSignature");
		
		UEquipList_C_BndEvt__EquipList_Accessories_FaceIcon_K2Node_ComponentBoundEvent_24_OnClickedCostumeIcon__DelegateSignature_Params params {};
		params.outItemIndex = outItemIndex;
		params.outUniqueId = outUniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipList.EquipList_C.BndEvt__EquipList_Accessories_HeadIcon_K2Node_ComponentBoundEvent_25_OnClickedCostumeIcon__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            outItemIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      outUniqueId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UEquipList_C::BndEvt__EquipList_Accessories_HeadIcon_K2Node_ComponentBoundEvent_25_OnClickedCostumeIcon__DelegateSignature(int32_t outItemIndex, const class FString& outUniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipList.EquipList_C.BndEvt__EquipList_Accessories_HeadIcon_K2Node_ComponentBoundEvent_25_OnClickedCostumeIcon__DelegateSignature");
		
		UEquipList_C_BndEvt__EquipList_Accessories_HeadIcon_K2Node_ComponentBoundEvent_25_OnClickedCostumeIcon__DelegateSignature_Params params {};
		params.outItemIndex = outItemIndex;
		params.outUniqueId = outUniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipList.EquipList_C.BndEvt__EquipList_Accessories_LeftHandIcon_K2Node_ComponentBoundEvent_26_OnClickedCostumeIcon__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            outItemIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      outUniqueId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UEquipList_C::BndEvt__EquipList_Accessories_LeftHandIcon_K2Node_ComponentBoundEvent_26_OnClickedCostumeIcon__DelegateSignature(int32_t outItemIndex, const class FString& outUniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipList.EquipList_C.BndEvt__EquipList_Accessories_LeftHandIcon_K2Node_ComponentBoundEvent_26_OnClickedCostumeIcon__DelegateSignature");
		
		UEquipList_C_BndEvt__EquipList_Accessories_LeftHandIcon_K2Node_ComponentBoundEvent_26_OnClickedCostumeIcon__DelegateSignature_Params params {};
		params.outItemIndex = outItemIndex;
		params.outUniqueId = outUniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipList.EquipList_C.BndEvt__EquipList_Accessories_RightHandIcon_K2Node_ComponentBoundEvent_27_OnClickedCostumeIcon__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            outItemIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      outUniqueId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UEquipList_C::BndEvt__EquipList_Accessories_RightHandIcon_K2Node_ComponentBoundEvent_27_OnClickedCostumeIcon__DelegateSignature(int32_t outItemIndex, const class FString& outUniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipList.EquipList_C.BndEvt__EquipList_Accessories_RightHandIcon_K2Node_ComponentBoundEvent_27_OnClickedCostumeIcon__DelegateSignature");
		
		UEquipList_C_BndEvt__EquipList_Accessories_RightHandIcon_K2Node_ComponentBoundEvent_27_OnClickedCostumeIcon__DelegateSignature_Params params {};
		params.outItemIndex = outItemIndex;
		params.outUniqueId = outUniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipList.EquipList_C.BndEvt__EquipList_MountImagineIcon_K2Node_ComponentBoundEvent_28_OnClickedCostumeIcon__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            outItemIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      outUniqueId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UEquipList_C::BndEvt__EquipList_MountImagineIcon_K2Node_ComponentBoundEvent_28_OnClickedCostumeIcon__DelegateSignature(int32_t outItemIndex, const class FString& outUniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipList.EquipList_C.BndEvt__EquipList_MountImagineIcon_K2Node_ComponentBoundEvent_28_OnClickedCostumeIcon__DelegateSignature");
		
		UEquipList_C_BndEvt__EquipList_MountImagineIcon_K2Node_ComponentBoundEvent_28_OnClickedCostumeIcon__DelegateSignature_Params params {};
		params.outItemIndex = outItemIndex;
		params.outUniqueId = outUniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipList.EquipList_C.ExecuteUbergraph_EquipList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEquipList_C::ExecuteUbergraph_EquipList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipList.EquipList_C.ExecuteUbergraph_EquipList");
		
		UEquipList_C_ExecuteUbergraph_EquipList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipList.EquipList_C.OnClickedEquipList__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            OutItemId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      outUniqueId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UEquipList_C::OnClickedEquipList__DelegateSignature(int32_t OutItemId, const class FString& outUniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipList.EquipList_C.OnClickedEquipList__DelegateSignature");
		
		UEquipList_C_OnClickedEquipList__DelegateSignature_Params params {};
		params.OutItemId = OutItemId;
		params.outUniqueId = outUniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEquipList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEquipList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass EquipList.EquipList_C");
		return ptr;
	}

}


