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
	 * 		Name   -> Function BannerIcon.BannerIcon_C.SetBanner
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        BannerName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBannerIcon_C::SetBanner(const class FName& BannerName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BannerIcon.BannerIcon_C.SetBanner");
		
		UBannerIcon_C_SetBanner_Params params {};
		params.BannerName = BannerName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BannerIcon.BannerIcon_C.OnLoaded_4B7E5655474594DCF8A223A5CD904BF3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBannerIcon_C::OnLoaded_4B7E5655474594DCF8A223A5CD904BF3(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BannerIcon.BannerIcon_C.OnLoaded_4B7E5655474594DCF8A223A5CD904BF3");
		
		UBannerIcon_C_OnLoaded_4B7E5655474594DCF8A223A5CD904BF3_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BannerIcon.BannerIcon_C.BannerLoadStart
	 * 		Flags  -> ()
	 */
	void UBannerIcon_C::BannerLoadStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BannerIcon.BannerIcon_C.BannerLoadStart");
		
		UBannerIcon_C_BannerLoadStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BannerIcon.BannerIcon_C.Construct
	 * 		Flags  -> ()
	 */
	void UBannerIcon_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BannerIcon.BannerIcon_C.Construct");
		
		UBannerIcon_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BannerIcon.BannerIcon_C.ExecuteUbergraph_BannerIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBannerIcon_C::ExecuteUbergraph_BannerIcon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BannerIcon.BannerIcon_C.ExecuteUbergraph_BannerIcon");
		
		UBannerIcon_C_ExecuteUbergraph_BannerIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBannerIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBannerIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BannerIcon.BannerIcon_C");
		return ptr;
	}

}


