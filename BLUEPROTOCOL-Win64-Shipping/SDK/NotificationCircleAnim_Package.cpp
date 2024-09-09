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
	 * 		Name   -> Function NotificationCircleAnim.NotificationCircleAnim_C.Construct
	 * 		Flags  -> ()
	 */
	void UNotificationCircleAnim_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotificationCircleAnim.NotificationCircleAnim_C.Construct");
		
		UNotificationCircleAnim_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotificationCircleAnim.NotificationCircleAnim_C.ExecuteUbergraph_NotificationCircleAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNotificationCircleAnim_C::ExecuteUbergraph_NotificationCircleAnim(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotificationCircleAnim.NotificationCircleAnim_C.ExecuteUbergraph_NotificationCircleAnim");
		
		UNotificationCircleAnim_C_ExecuteUbergraph_NotificationCircleAnim_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNotificationCircleAnim_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNotificationCircleAnim_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass NotificationCircleAnim.NotificationCircleAnim_C");
		return ptr;
	}

}


