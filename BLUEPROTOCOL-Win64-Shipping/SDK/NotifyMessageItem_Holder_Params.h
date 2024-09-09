#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function NotifyMessageItem_Holder.NotifyMessageItem_Holder_C.GetAnimatedPosition
	 */
	struct UNotifyMessageItem_Holder_C_GetAnimatedPosition_Params
	{
	public:
		struct FMargin                                             Position;                                                // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function NotifyMessageItem_Holder.NotifyMessageItem_Holder_C.SetContent
	 */
	struct UNotifyMessageItem_Holder_C_SetContent_Params
	{
	public:
		class UUserWidget*                                         Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NotifyMessageItem_Holder.NotifyMessageItem_Holder_C.Start
	 */
	struct UNotifyMessageItem_Holder_C_Start_Params
	{	};

	/**
	 * Function NotifyMessageItem_Holder.NotifyMessageItem_Holder_C.OnAnimationFinished
	 */
	struct UNotifyMessageItem_Holder_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NotifyMessageItem_Holder.NotifyMessageItem_Holder_C.ExecuteUbergraph_NotifyMessageItem_Holder
	 */
	struct UNotifyMessageItem_Holder_C_ExecuteUbergraph_NotifyMessageItem_Holder_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TQ74[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function NotifyMessageItem_Holder.NotifyMessageItem_Holder_C.OnFinished__DelegateSignature
	 */
	struct UNotifyMessageItem_Holder_C_OnFinished__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
