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
	 * 		Name   -> Function BuffIconFunctionLibrary.BuffIconFunctionLibrary_C.FindIconAssetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBStatusAilmentIconType                           IconType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bLarge                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  Texture                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsFind                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        TextId                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bBuff                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ESBStatusAilmentPlateType                          Type                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBuffIconFunctionLibrary_C::FindIconAssetData(ESBStatusAilmentIconType IconType, bool bLarge, class UObject* __WorldContext, class UTexture2D** Texture, bool* IsFind, class FName* TextId, bool* bBuff, ESBStatusAilmentPlateType* Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BuffIconFunctionLibrary.BuffIconFunctionLibrary_C.FindIconAssetData");
		
		UBuffIconFunctionLibrary_C_FindIconAssetData_Params params {};
		params.IconType = IconType;
		params.bLarge = bLarge;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Texture != nullptr)
			*Texture = params.Texture;
		if (IsFind != nullptr)
			*IsFind = params.IsFind;
		if (TextId != nullptr)
			*TextId = params.TextId;
		if (bBuff != nullptr)
			*bBuff = params.bBuff;
		if (Type != nullptr)
			*Type = params.Type;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBuffIconFunctionLibrary_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBuffIconFunctionLibrary_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BuffIconFunctionLibrary.BuffIconFunctionLibrary_C");
		return ptr;
	}

}


