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
	 * 		Name   -> Function TokenItem.TokenItem_C.GetToolTipWidget_1
	 * 		Flags  -> ()
	 */
	class UWidget* UTokenItem_C::GetToolTipWidget_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TokenItem.TokenItem_C.GetToolTipWidget_1");
		
		UTokenItem_C_GetToolTipWidget_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TokenItem.TokenItem_C.OnLoaded_D79227434D2250620D435BBAE24D370E
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTokenItem_C::OnLoaded_D79227434D2250620D435BBAE24D370E(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TokenItem.TokenItem_C.OnLoaded_D79227434D2250620D435BBAE24D370E");
		
		UTokenItem_C_OnLoaded_D79227434D2250620D435BBAE24D370E_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TokenItem.TokenItem_C.OnLoaded_722B192B4CFD0BB02EAFCDB5FDEB7A4D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTokenItem_C::OnLoaded_722B192B4CFD0BB02EAFCDB5FDEB7A4D(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TokenItem.TokenItem_C.OnLoaded_722B192B4CFD0BB02EAFCDB5FDEB7A4D");
		
		UTokenItem_C_OnLoaded_722B192B4CFD0BB02EAFCDB5FDEB7A4D_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TokenItem.TokenItem_C.SetMoneyData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  IconImage                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTokenItem_C::SetMoneyData(class UTexture2D* IconImage, const class FString& Name, int32_t Amount, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TokenItem.TokenItem_C.SetMoneyData");
		
		UTokenItem_C_SetMoneyData_Params params {};
		params.IconImage = IconImage;
		params.Name = Name;
		params.Amount = Amount;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TokenItem.TokenItem_C.Set Token Data
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMasterToken                                TokenData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDateTime                                   EndOfTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDateTime                                   LastRecoveryDate                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class USBToken*                                    Token                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTokenItem_C::SetTokenData(const struct FMasterToken& TokenData, int32_t Amount, const struct FDateTime& EndOfTime, const struct FDateTime& LastRecoveryDate, class USBToken* Token, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TokenItem.TokenItem_C.Set Token Data");
		
		UTokenItem_C_SetTokenData_Params params {};
		params.TokenData = TokenData;
		params.Amount = Amount;
		params.EndOfTime = EndOfTime;
		params.LastRecoveryDate = LastRecoveryDate;
		params.Token = Token;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TokenItem.TokenItem_C.SetExpiredTokenData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMasterToken                                TokenData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDateTime                                   EndTime                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTokenItem_C::SetExpiredTokenData(const struct FMasterToken& TokenData, int32_t Amount, const struct FDateTime& EndTime, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TokenItem.TokenItem_C.SetExpiredTokenData");
		
		UTokenItem_C_SetExpiredTokenData_Params params {};
		params.TokenData = TokenData;
		params.Amount = Amount;
		params.EndTime = EndTime;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TokenItem.TokenItem_C.ExecuteUbergraph_TokenItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTokenItem_C::ExecuteUbergraph_TokenItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TokenItem.TokenItem_C.ExecuteUbergraph_TokenItem");
		
		UTokenItem_C_ExecuteUbergraph_TokenItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTokenItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTokenItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TokenItem.TokenItem_C");
		return ptr;
	}

}


