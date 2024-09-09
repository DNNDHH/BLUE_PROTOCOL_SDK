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
	 * UserDefinedStruct ST_RsDialogCommonInfo.ST_RsDialogCommonInfo
	 * Size -> 0x0041
	 */
	struct FST_RsDialogCommonInfo
	{
	public:
		ERsDialogProductTitleType                                  ProductTitleType_4_43DA6C6B46C9EA9DCDE30C8C74715D97;     // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CGJC[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ItemSetId_30_DFD3F9D64927B3FBC04B74A161F5F13B;           // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                ProductName_8_6A83C7084CAC5330720C85898270750B;          // 0x0008(0x0018) Edit, BlueprintVisible
		int32_t                                                    RankFrom_11_FC9689804C4DE1BF878D7CBD00F6A399;            // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    RankTo_13_776E35F84B8E5194B9541482654ECA89;              // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ShowPurchaseNum_22_DFDC3704404F04442BA8B0B4552CE3E9;     // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JL6Z[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    PurchaseNum_15_0D91F9BF4D1CC3935D95A1B2A9C43592;         // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ERsDialogPaymentType                                       PaymentType01_25_2736491E4EC00F5E4318E895C5221FAF;       // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_94CD[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    PurchasePrice01_17_00B53D1B407A0990DFC1089945EA5FF2;     // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ERsDialogPaymentType                                       PaymentType02_27_933376CB4303D49349EB869BA852ECD5;       // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9OIO[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    PurchasePrice02_19_D68AB5B24BED8B211C98A283AA78AD7E;     // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       PaidOnly_32_2321B9294C2AFD05841E2DB8A68DB31C;            // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
