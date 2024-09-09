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
	 * Function BP_BalloonComponent.BP_BalloonComponent_C.Show_Extend
	 */
	struct UBP_BalloonComponent_C_Show_Extend_Params
	{
	public:
		class FString                                              InText;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class ACharacter*                                          InAttachCharacter;                                       // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                InAttachTransformName;                                   // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InAutoCloseTime;                                         // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BalloonComponent.BP_BalloonComponent_C.OnRemove_Event_1
	 */
	struct UBP_BalloonComponent_C_OnRemove_Event_1_Params
	{	};

	/**
	 * Function BP_BalloonComponent.BP_BalloonComponent_C.Show
	 */
	struct UBP_BalloonComponent_C_Show_Params
	{
	public:
		class FString                                              InText;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class ACharacter*                                          InAttachCharacter;                                       // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BalloonComponent.BP_BalloonComponent_C.Hide
	 */
	struct UBP_BalloonComponent_C_Hide_Params
	{	};

	/**
	 * Function BP_BalloonComponent.BP_BalloonComponent_C.ExecuteUbergraph_BP_BalloonComponent
	 */
	struct UBP_BalloonComponent_C_ExecuteUbergraph_BP_BalloonComponent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BalloonComponent.BP_BalloonComponent_C.ChangeBalloonVisible__DelegateSignature
	 */
	struct UBP_BalloonComponent_C_ChangeBalloonVisible__DelegateSignature_Params
	{
	public:
		bool                                                       bVsiible;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
