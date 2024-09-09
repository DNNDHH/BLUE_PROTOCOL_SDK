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
	 * Function BP_PhotoModeStampControlData.BP_PhotoModeStampControlData_C.IsStamp
	 */
	struct UBP_PhotoModeStampControlData_C_IsStamp_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PhotoModeStampControlData.BP_PhotoModeStampControlData_C.IsLastData
	 */
	struct UBP_PhotoModeStampControlData_C_IsLastData_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PhotoModeStampControlData.BP_PhotoModeStampControlData_C.IsFirstData
	 */
	struct UBP_PhotoModeStampControlData_C_IsFirstData_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PhotoModeStampControlData.BP_PhotoModeStampControlData_C.GetText
	 */
	struct UBP_PhotoModeStampControlData_C_GetText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BP_PhotoModeStampControlData.BP_PhotoModeStampControlData_C.SetStamp
	 */
	struct UBP_PhotoModeStampControlData_C_SetStamp_Params
	{
	public:
		class UWBP_PhotoModeStamp_C*                               Stamp;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PhotoModeStampControlData.BP_PhotoModeStampControlData_C.DELETE
	 */
	struct UBP_PhotoModeStampControlData_C_DELETE_Params
	{	};

	/**
	 * Function BP_PhotoModeStampControlData.BP_PhotoModeStampControlData_C.SetIndex
	 */
	struct UBP_PhotoModeStampControlData_C_SetIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsLastData;                                             // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PhotoModeStampControlData.BP_PhotoModeStampControlData_C.SetVignette
	 */
	struct UBP_PhotoModeStampControlData_C_SetVignette_Params
	{
	public:
		class UWidget*                                             Vignette;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PhotoModeStampControlData.BP_PhotoModeStampControlData_C.SetSize
	 */
	struct UBP_PhotoModeStampControlData_C_SetSize_Params
	{
	public:
		float                                                      Size;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PhotoModeStampControlData.BP_PhotoModeStampControlData_C.SetAngle
	 */
	struct UBP_PhotoModeStampControlData_C_SetAngle_Params
	{
	public:
		float                                                      Angle;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PhotoModeStampControlData.BP_PhotoModeStampControlData_C.SetAlpha
	 */
	struct UBP_PhotoModeStampControlData_C_SetAlpha_Params
	{
	public:
		float                                                      Alpha;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PhotoModeStampControlData.BP_PhotoModeStampControlData_C.SetReverse
	 */
	struct UBP_PhotoModeStampControlData_C_SetReverse_Params
	{
	public:
		bool                                                       bReverse;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PhotoModeStampControlData.BP_PhotoModeStampControlData_C.SetSelected
	 */
	struct UBP_PhotoModeStampControlData_C_SetSelected_Params
	{
	public:
		bool                                                       bSelected;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PhotoModeStampControlData.BP_PhotoModeStampControlData_C.SetListItem
	 */
	struct UBP_PhotoModeStampControlData_C_SetListItem_Params
	{
	public:
		class UWBP_PhotoModeStampControlListItem_C*                ListItem;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PhotoModeStampControlData.BP_PhotoModeStampControlData_C.ExecuteUbergraph_BP_PhotoModeStampControlData
	 */
	struct UBP_PhotoModeStampControlData_C_ExecuteUbergraph_BP_PhotoModeStampControlData_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
