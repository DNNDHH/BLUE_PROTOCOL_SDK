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
	 * 		Name   -> Function CertificationWindow_Sub.CertificationWindow_Sub_C.GetTextId_Monthly
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Upper                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 */
	void UCertificationWindow_Sub_C::GetTextId_Monthly(int32_t Upper, class FText* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CertificationWindow_Sub.CertificationWindow_Sub_C.GetTextId_Monthly");
		
		UCertificationWindow_Sub_C_GetTextId_Monthly_Params params {};
		params.Upper = Upper;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CertificationWindow_Sub.CertificationWindow_Sub_C.GetTextId_ValueLimit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Upper                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 */
	void UCertificationWindow_Sub_C::GetTextId_ValueLimit(int32_t Upper, int32_t Value, class FText* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CertificationWindow_Sub.CertificationWindow_Sub_C.GetTextId_ValueLimit");
		
		UCertificationWindow_Sub_C_GetTextId_ValueLimit_Params params {};
		params.Upper = Upper;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CertificationWindow_Sub.CertificationWindow_Sub_C.GetTextId_AgeLimit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Lower                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Upper                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 */
	void UCertificationWindow_Sub_C::GetTextId_AgeLimit(int32_t Lower, int32_t Upper, class FText* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CertificationWindow_Sub.CertificationWindow_Sub_C.GetTextId_AgeLimit");
		
		UCertificationWindow_Sub_C_GetTextId_AgeLimit_Params params {};
		params.Lower = Lower;
		params.Upper = Upper;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CertificationWindow_Sub.CertificationWindow_Sub_C.SetText_MasterData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBPaymentLimitMasterData                   Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UCertificationWindow_Sub_C::SetText_MasterData(const struct FSBPaymentLimitMasterData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CertificationWindow_Sub.CertificationWindow_Sub_C.SetText_MasterData");
		
		UCertificationWindow_Sub_C_SetText_MasterData_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CertificationWindow_Sub.CertificationWindow_Sub_C.ExecuteUbergraph_CertificationWindow_Sub
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCertificationWindow_Sub_C::ExecuteUbergraph_CertificationWindow_Sub(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CertificationWindow_Sub.CertificationWindow_Sub_C.ExecuteUbergraph_CertificationWindow_Sub");
		
		UCertificationWindow_Sub_C_ExecuteUbergraph_CertificationWindow_Sub_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CertificationWindow_Sub.CertificationWindow_Sub_C.OnRequest__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Year                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Month                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCertificationWindow_Sub_C::OnRequest__DelegateSignature(int32_t Year, int32_t Month)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CertificationWindow_Sub.CertificationWindow_Sub_C.OnRequest__DelegateSignature");
		
		UCertificationWindow_Sub_C_OnRequest__DelegateSignature_Params params {};
		params.Year = Year;
		params.Month = Month;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CertificationWindow_Sub.CertificationWindow_Sub_C.OnClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCertificationWindow_Sub_C::OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CertificationWindow_Sub.CertificationWindow_Sub_C.OnClose__DelegateSignature");
		
		UCertificationWindow_Sub_C_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCertificationWindow_Sub_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCertificationWindow_Sub_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CertificationWindow_Sub.CertificationWindow_Sub_C");
		return ptr;
	}

}


