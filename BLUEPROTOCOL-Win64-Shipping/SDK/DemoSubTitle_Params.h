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
	 * Function DemoSubTitle.DemoSubTitle_C.GetAnimation
	 */
	struct UDemoSubTitle_C_GetAnimation_Params
	{
	public:
		EDemoSubTitleAnimationType                                 InAnimationType;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VLZP[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidgetAnimation*                                    OutAnimation;                                            // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DemoSubTitle.DemoSubTitle_C.Construct
	 */
	struct UDemoSubTitle_C_Construct_Params
	{	};

	/**
	 * Function DemoSubTitle.DemoSubTitle_C.OnAnimationFinished
	 */
	struct UDemoSubTitle_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DemoSubTitle.DemoSubTitle_C.Finish
	 */
	struct UDemoSubTitle_C_Finish_Params
	{	};

	/**
	 * Function DemoSubTitle.DemoSubTitle_C.FailedFinish
	 */
	struct UDemoSubTitle_C_FailedFinish_Params
	{	};

	/**
	 * Function DemoSubTitle.DemoSubTitle_C.ExecuteUbergraph_DemoSubTitle
	 */
	struct UDemoSubTitle_C_ExecuteUbergraph_DemoSubTitle_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DemoSubTitle.DemoSubTitle_C.OnFinish__DelegateSignature
	 */
	struct UDemoSubTitle_C_OnFinish__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
