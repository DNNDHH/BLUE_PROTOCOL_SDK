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
	 * 		Name   -> Function BP_UI_MapFunctionLibrary.BP_UI_MapFunctionLibrary_C.GetMapSymbolIconTextureByMapId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InMapId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_UI_MapFunctionLibrary_C::GetMapSymbolIconTextureByMapId(const class FString& InMapId, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_MapFunctionLibrary.BP_UI_MapFunctionLibrary_C.GetMapSymbolIconTextureByMapId");
		
		UBP_UI_MapFunctionLibrary_C_GetMapSymbolIconTextureByMapId_Params params {};
		params.InMapId = InMapId;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_MapFunctionLibrary.BP_UI_MapFunctionLibrary_C.IsPublicDungeon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SearchIn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_UI_MapFunctionLibrary_C::IsPublicDungeon(const class FString& SearchIn, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_MapFunctionLibrary.BP_UI_MapFunctionLibrary_C.IsPublicDungeon");
		
		UBP_UI_MapFunctionLibrary_C_IsPublicDungeon_Params params {};
		params.SearchIn = SearchIn;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_MapFunctionLibrary.BP_UI_MapFunctionLibrary_C.SetNpcFacilityIconTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBFacilityType                                    FacilityType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UImage*                                      Image                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsFound                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsEnable                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_UI_MapFunctionLibrary_C::SetNpcFacilityIconTexture(ESBFacilityType FacilityType, class UImage** Image, class UObject* __WorldContext, bool* IsFound, bool* IsEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_MapFunctionLibrary.BP_UI_MapFunctionLibrary_C.SetNpcFacilityIconTexture");
		
		UBP_UI_MapFunctionLibrary_C_SetNpcFacilityIconTexture_Params params {};
		params.FacilityType = FacilityType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Image != nullptr)
			*Image = params.Image;
		if (IsFound != nullptr)
			*IsFound = params.IsFound;
		if (IsEnable != nullptr)
			*IsEnable = params.IsEnable;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_MapFunctionLibrary.BP_UI_MapFunctionLibrary_C.GetMapIconInfo_ByCharacterProfileData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBFacilityType                                    InCharaProfileDataFacilityType                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        InCharaProfileDataRowName                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBCharacterProfileLocationData             InCharacterProfileLocationData                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsMapIconValid                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UTexture2D*                                  OutIconTexture                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OutIconPriority                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   OutIconWorldPosition                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      OutIconTooltipText                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_UI_MapFunctionLibrary_C::GetMapIconInfo_ByCharacterProfileData(ESBFacilityType InCharaProfileDataFacilityType, const class FName& InCharaProfileDataRowName, const struct FSBCharacterProfileLocationData& InCharacterProfileLocationData, class UObject* __WorldContext, bool* IsMapIconValid, class UTexture2D** OutIconTexture, int32_t* OutIconPriority, struct FVector2D* OutIconWorldPosition, class FString* OutIconTooltipText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_MapFunctionLibrary.BP_UI_MapFunctionLibrary_C.GetMapIconInfo_ByCharacterProfileData");
		
		UBP_UI_MapFunctionLibrary_C_GetMapIconInfo_ByCharacterProfileData_Params params {};
		params.InCharaProfileDataFacilityType = InCharaProfileDataFacilityType;
		params.InCharaProfileDataRowName = InCharaProfileDataRowName;
		params.InCharacterProfileLocationData = InCharacterProfileLocationData;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsMapIconValid != nullptr)
			*IsMapIconValid = params.IsMapIconValid;
		if (OutIconTexture != nullptr)
			*OutIconTexture = params.OutIconTexture;
		if (OutIconPriority != nullptr)
			*OutIconPriority = params.OutIconPriority;
		if (OutIconWorldPosition != nullptr)
			*OutIconWorldPosition = params.OutIconWorldPosition;
		if (OutIconTooltipText != nullptr)
			*OutIconTooltipText = params.OutIconTooltipText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_MapFunctionLibrary.BP_UI_MapFunctionLibrary_C.Get Map Icon Info by Location Info
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBLocationInfo                             InLocationInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     In                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsMapIconValid                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EMapSymbolIconType                                 OutIconType                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OutIconPriority                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   OutIconWorldPosition                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      OutIconTooltipText                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      OutTermId                                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_UI_MapFunctionLibrary_C::GetMapIconInfobyLocationInfo(const struct FSBLocationInfo& InLocationInfo, class UObject* In, class UObject* NewParam, class UObject* __WorldContext, bool* IsMapIconValid, EMapSymbolIconType* OutIconType, int32_t* OutIconPriority, struct FVector2D* OutIconWorldPosition, class FString* OutIconTooltipText, class FString* OutTermId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_MapFunctionLibrary.BP_UI_MapFunctionLibrary_C.Get Map Icon Info by Location Info");
		
		UBP_UI_MapFunctionLibrary_C_GetMapIconInfobyLocationInfo_Params params {};
		params.InLocationInfo = InLocationInfo;
		params.In = In;
		params.NewParam = NewParam;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsMapIconValid != nullptr)
			*IsMapIconValid = params.IsMapIconValid;
		if (OutIconType != nullptr)
			*OutIconType = params.OutIconType;
		if (OutIconPriority != nullptr)
			*OutIconPriority = params.OutIconPriority;
		if (OutIconWorldPosition != nullptr)
			*OutIconWorldPosition = params.OutIconWorldPosition;
		if (OutIconTooltipText != nullptr)
			*OutIconTooltipText = params.OutIconTooltipText;
		if (OutTermId != nullptr)
			*OutTermId = params.OutTermId;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_MapFunctionLibrary.BP_UI_MapFunctionLibrary_C.GetMapSymbolIconTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMapSymbolIconType                                 InSymbolIconType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  OutSymbolIconTexture                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_UI_MapFunctionLibrary_C::GetMapSymbolIconTexture(EMapSymbolIconType InSymbolIconType, class UObject* __WorldContext, class UTexture2D** OutSymbolIconTexture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_MapFunctionLibrary.BP_UI_MapFunctionLibrary_C.GetMapSymbolIconTexture");
		
		UBP_UI_MapFunctionLibrary_C_GetMapSymbolIconTexture_Params params {};
		params.InSymbolIconType = InSymbolIconType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSymbolIconTexture != nullptr)
			*OutSymbolIconTexture = params.OutSymbolIconTexture;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_MapFunctionLibrary.BP_UI_MapFunctionLibrary_C.GetMapUIErrorMessageText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InTextId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        OutText                                                    (Parm, OutParm)
	 */
	void UBP_UI_MapFunctionLibrary_C::GetMapUIErrorMessageText(int32_t InTextId, class UObject* __WorldContext, class FText* OutText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_MapFunctionLibrary.BP_UI_MapFunctionLibrary_C.GetMapUIErrorMessageText");
		
		UBP_UI_MapFunctionLibrary_C_GetMapUIErrorMessageText_Params params {};
		params.InTextId = InTextId;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutText != nullptr)
			*OutText = params.OutText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_MapFunctionLibrary.BP_UI_MapFunctionLibrary_C.CheckIfIconPositionCoincide
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FVector2D>                           InRegisteredPositionList                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FVector2D                                   InNewPosition                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               DoesCoincide                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            OutCoincideIconRegId                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_UI_MapFunctionLibrary_C::CheckIfIconPositionCoincide(TArray<struct FVector2D>* InRegisteredPositionList, const struct FVector2D& InNewPosition, class UObject* __WorldContext, bool* DoesCoincide, int32_t* OutCoincideIconRegId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_MapFunctionLibrary.BP_UI_MapFunctionLibrary_C.CheckIfIconPositionCoincide");
		
		UBP_UI_MapFunctionLibrary_C_CheckIfIconPositionCoincide_Params params {};
		params.InNewPosition = InNewPosition;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InRegisteredPositionList != nullptr)
			*InRegisteredPositionList = params.InRegisteredPositionList;
		if (DoesCoincide != nullptr)
			*DoesCoincide = params.DoesCoincide;
		if (OutCoincideIconRegId != nullptr)
			*OutCoincideIconRegId = params.OutCoincideIconRegId;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_UI_MapFunctionLibrary_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_UI_MapFunctionLibrary_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_UI_MapFunctionLibrary.BP_UI_MapFunctionLibrary_C");
		return ptr;
	}

}


