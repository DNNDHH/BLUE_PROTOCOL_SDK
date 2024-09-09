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
	 * 		Name   -> Function Notification_DotAnim.Notification_DotAnim_C.Construct
	 * 		Flags  -> ()
	 */
	void UNotification_DotAnim_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Notification_DotAnim.Notification_DotAnim_C.Construct");
		
		UNotification_DotAnim_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Notification_DotAnim.Notification_DotAnim_C.ExecuteUbergraph_Notification_DotAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNotification_DotAnim_C::ExecuteUbergraph_Notification_DotAnim(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Notification_DotAnim.Notification_DotAnim_C.ExecuteUbergraph_Notification_DotAnim");
		
		UNotification_DotAnim_C_ExecuteUbergraph_Notification_DotAnim_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNotification_DotAnim_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNotification_DotAnim_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Notification_DotAnim.Notification_DotAnim_C");
		return ptr;
	}

}


